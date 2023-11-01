from django.shortcuts import render
from django.http import HttpResponse

def home(request):
    return render(request,'SDG/home.html')
def register(request):
    return render(request,'SDG/register.html')