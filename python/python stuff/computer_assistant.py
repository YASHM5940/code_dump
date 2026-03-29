import pyttsx3
import datetime
import speech_recognition as sr
import pyaudio 
import wikipedia
import webbrowser
engine=pyttsx3.init('sapi5')
voices=engine.getProperty("voices")
# print(voices[0].id)
# print(voices[1].id) yeh voices ke options hein.0 walli male , 1 walli female
engine.setProperty('voice', voices[0])

def jarvisspeak(audio):
    engine.say(audio)
    engine.runAndWait()

def greeting():
    hour=int(datetime.datetime.now().hour)
    if hour==16:
        jarvisspeak("bhai its 4 o clock. coffe time")
    elif hour>0 and hour<12:
        jarvisspeak("its morning jaguar.get up lazy boy!!")

    if hour>12:
        jarvisspeak('its afternon jaguar sir')


def takeOrder():
    r=sr.Recognizer()
    with sr.Microphone() as source:
        print("i am ready to take order, sir")
        jarvisspeak("i am ready to take order, sir")
        audio = r.listen(source)

    try:
        print("recognizing order given.....")
        query=r.recognize_google(audio, language='en-in')
        print("jaguar sir said : " , query)
    except Exception as e:
        print(e)

        jarvisspeak("please repeat the order. i couldn't understand")
        return "None"
    return query

if __name__ == "__main__":
    jarvisspeak("i am jaguar's computer assistant")
    # greeting()
    while True:
        query=takeOrder().lower()
        if 'wikipedia' in query:
            jarvisspeak("searching in wikipedia")
            query=query.replace("wikipedia" , "")
            results=wikipedia.summary(query, sentences=2)
            jarvisspeak(" according to wikipedia ")
            jarvisspeak(results)
        elif "open youtube" in query:
            webbrowser.open("youtube.com")
        elif "open chess" in query:
            webbrowser.open("www.chess.com")
        else:
            break

 