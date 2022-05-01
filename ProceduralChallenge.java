import processing.core.PApplet;

import java.applet.Applet;

public class ProceduralChallenge extends PApplet {

    public static final int WIDTH = 640;
    public static final int HEIGHT = 480;
    public static final int DIAMETER = 10;
    int x = 0;

    public static void main(String[] args) {
        PApplet.main("Challenge", args);
    }

    @Override
    public void settings() {
        super.settings();
        size(WIDTH, HEIGHT); //sketch size
    }


    public void draw() {
        for (int i = 1; i <= 4; i++) {
            getEllipse(i * x, i * HEIGHT / 5);
        }
        x += 1;
    }

    private void getEllipse(int posX, int    height) {
        ellipse(posX, height, DIAMETER, DIAMETER);

    }
}

