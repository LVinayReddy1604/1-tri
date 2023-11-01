from django.urls import path
from . import views
urlpatterns = [
path('', views.home, name="My homepage"),
path('register', views.register, name="Register Page"),
]