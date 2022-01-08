package com.icche.defencecoronabdbyseeam;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }


    public void gotoaboutcorona(View view) {

        Intent gotoaboutcorona= new Intent(MainActivity.this, MainActivity3 .class);
        startActivity(gotoaboutcorona);
    }

    public void gotosym(View view) {

        Intent sym= new Intent(MainActivity.this, SymandPrevention.class);
        startActivity(sym);
    }

    public void gotoaffectedcountries(View view) {
        Intent affectedcountries= new Intent(MainActivity.this, AffectedCountries.class);
        startActivity(affectedcountries);
    }

    public void CoronaUpdate(View view) {
        Intent CoronaUpdate= new Intent(MainActivity.this, CoronaUpdate.class);
        startActivity(CoronaUpdate);
    }

    public void News(View view) {
        Intent News= new Intent(MainActivity.this, News.class);
        startActivity(News);
    }

    public void Gujob(View view) {
        Intent Gujob = new Intent(MainActivity.this, Gujob.class);
        startActivity(Gujob);
    }

    public void LockdownArea(View view) {
        Intent LA= new Intent(MainActivity.this, LockdownAreas.class);
        startActivity(LA);
    }

    public void LockdownTrix(View view) {
        Intent LTX= new Intent(MainActivity.this, LockdownTricks.class);
        startActivity(LTX);
    }

    public void akrantoKoronioyu(View view) {
        Intent Kor= new Intent(MainActivity.this, AkrantoKoroniyo.class);
        startActivity(Kor);
    }

    public void SebaTutorial(View view) {
        Intent ST= new Intent(MainActivity.this, SebaTrick.class);
        startActivity(ST);
    }

    public void NearestSeccha(View view) {
        Intent NS= new Intent(MainActivity.this, NearestVolunteers.class);
        startActivity(NS);
    }

    public void chat(View view) {
        Intent C= new Intent(MainActivity.this, Chat.class);
        startActivity(C);
    }

    public void MedecineREminder(View view) {
        Intent MedecineReminder= new Intent(MainActivity.this, MedecineReminder.class);
        startActivity(MedecineReminder);
    }

    public void CovFighter(View view) {
        Intent CovidFightersStory= new Intent(MainActivity.this, CovidFightersStory.class);
        startActivity(CovidFightersStory);
    }

    public void Sustho(View view) {

        Intent SusthoHoleKoroniyo= new Intent(MainActivity.this, SusthoHoleKoroniyo.class);
        startActivity(SusthoHoleKoroniyo);
    }

    public void DiedVIP(View view) {
        Intent DiedVIP= new Intent(MainActivity.this, DiedVIP.class);
        startActivity(DiedVIP);
    }

    public void DeiedDoctors(View view) {
        Intent DiedDoctors= new Intent(MainActivity.this, DiedDoctors.class);
        startActivity(DiedDoctors);
    }

    public void SebaRQ(View view) {

        Intent RqForSeba= new Intent(MainActivity.this, RqForSeba.class);
        startActivity(RqForSeba);
    }

    public void Feedback(View view) {
        Intent Feedback= new Intent(MainActivity.this, Feedback.class);
        startActivity(Feedback);
    }

    public void NearestHospital(View view) {
        Intent NH= new Intent(MainActivity.this, NearestHospital.class);
        startActivity(NH);
    }

    public void mypro(View view) {
        Intent MP= new Intent(MainActivity.this, MyProfile.class);
        startActivity(MP);
    }

    public void plasma(View view) {
        Intent PB= new Intent(MainActivity.this, Plasma.class);
        startActivity(PB);
    }

    public void vc(View view) {
        Intent VU= new Intent(MainActivity.this, Vaccine.class);
        startActivity(VU);
    }
}