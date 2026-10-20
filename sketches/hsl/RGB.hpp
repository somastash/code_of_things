#pragma once
#include <math.h>

struct RGB {
	int r;
	int g;
	int b;
};

RGB hsl_to_rgb(int hue, float saturation, float lightness) {
	// Hueを0〜359度に正規化
	hue = ((hue % 360) + 360) % 360;

	// 彩度と明度を0〜1に変換
	float s = saturation / 100.0;
	float l = lightness / 100.0;

	// 色の計算に使う中間値
	float chroma = (1.0 - fabs(2.0 * l - 1.0)) * s;
	float x = chroma * (1.0 - fabs(fmod(hue / 60.0, 2.0) - 1.0));
	float m = l - chroma / 2.0;

	float r1 = 0.0;
	float g1 = 0.0;
	float b1 = 0.0;

	// Hueの角度に応じてRGBの組み合わせを決める
	if (hue < 60) {
		r1 = chroma;
		g1 = x;
	} else if (hue < 120) {
		r1 = x;
		g1 = chroma;
	} else if (hue < 180) {
		g1 = chroma;
		b1 = x;
	} else if (hue < 240) {
		g1 = x;
		b1 = chroma;
	} else if (hue < 300) {
		r1 = x;
		b1 = chroma;
	} else {
		r1 = chroma;
		b1 = x;
	}

	// 0〜1の値を0〜255に変換して四捨五入
	RGB color;
	color.r = (int)((r1 + m) * 255.0 + 0.5);
	color.g = (int)((g1 + m) * 255.0 + 0.5);
	color.b = (int)((b1 + m) * 255.0 + 0.5);

	return color;
}
