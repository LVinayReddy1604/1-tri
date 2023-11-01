from django.shortcuts import render

# Create your views here.
def Home(request) :
    return render(request, 'myapp/home.html')

def Regform(request) :
    return render(request, 'myapp/regform.html')

def About(request) :
    return render(request, 'myapp/about.html')

def esm(request) :
    return render(request, 'myapp/esm.jpg')