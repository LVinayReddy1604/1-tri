from django.urls import path
from . import views
urlpatterns = [
    path('', views.hi, name="My homepage"),
    path('/about', views.about, name="about"),
]