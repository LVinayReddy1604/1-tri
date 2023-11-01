
from django.shortcuts import render
from django.http import HttpResponse

def hi(request):
    return render(request,'myapp/home.html')

def about(request):
    return render(request,"myapp/about.html")