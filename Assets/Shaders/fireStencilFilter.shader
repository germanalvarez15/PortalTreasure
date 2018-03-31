﻿Shader "Custom/fakeFire"
{
	Properties
	{
		_Color ("Color",Color) = (1,1,1,1)
		[Enum(Equal,3,NotEqual,6)] _StencilTest ("Stencil Test", int) = 6
	}
	SubShader
	{
		Color [_Color]
		Stencil{
			Ref 0
			Comp [_StencilTest]

		}

		Pass
		{
			
		}
	}
}
