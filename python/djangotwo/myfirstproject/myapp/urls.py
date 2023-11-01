from django.urls import path
from . import views
urlpatterns = [
path('', views.Home, name="My homepage"),
path('regform', views.Regform, name="Reg form"),
path('about', views.About, name="about"),
path('esm', views.esm, name="esm"),
]