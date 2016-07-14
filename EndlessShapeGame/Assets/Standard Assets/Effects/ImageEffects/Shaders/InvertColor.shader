﻿Shader "Hidden/Invert Color Effect" {
Properties {
	_MainTex ("Base (RGB)", 2D) = "white" {}
}

SubShader {
	Pass {
		ZTest Always Cull Off ZWrite Off
				
CGPROGRAM
#pragma vertex vert_img
#pragma fragment frag
#include "UnityCG.cginc"

uniform sampler2D _MainTex;

fixed4 frag (v2f_img i) : SV_Target
{
	return fixed4 (1.0, 1.0, 1.0, 1.0) - tex2D(_MainTex, i.uv);
}
ENDCG

	}
}

Fallback off

}
