﻿#pragma once
#include <stdint.h>
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t401;
// UnityEngine.GUIContent
struct GUIContent_t264;
// UnityEngine.GUIStyle
struct GUIStyle_t220;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t913;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.TextEditor/DblClickSnapping
#include "UnityEngine_UnityEngine_TextEditor_DblClickSnapping.h"
// UnityEngine.TextEditor
struct  TextEditor_t912  : public Object_t
{
	// UnityEngine.TouchScreenKeyboard UnityEngine.TextEditor::keyboardOnScreen
	TouchScreenKeyboard_t401 * ___keyboardOnScreen_0;
	// System.Int32 UnityEngine.TextEditor::controlID
	int32_t ___controlID_1;
	// UnityEngine.GUIContent UnityEngine.TextEditor::content
	GUIContent_t264 * ___content_2;
	// UnityEngine.GUIStyle UnityEngine.TextEditor::style
	GUIStyle_t220 * ___style_3;
	// System.Boolean UnityEngine.TextEditor::multiline
	bool ___multiline_4;
	// System.Boolean UnityEngine.TextEditor::hasHorizontalCursorPos
	bool ___hasHorizontalCursorPos_5;
	// System.Boolean UnityEngine.TextEditor::isPasswordField
	bool ___isPasswordField_6;
	// System.Boolean UnityEngine.TextEditor::m_HasFocus
	bool ___m_HasFocus_7;
	// UnityEngine.Vector2 UnityEngine.TextEditor::scrollOffset
	Vector2_t85  ___scrollOffset_8;
	// UnityEngine.Rect UnityEngine.TextEditor::m_Position
	Rect_t232  ___m_Position_9;
	// System.Int32 UnityEngine.TextEditor::m_CursorIndex
	int32_t ___m_CursorIndex_10;
	// System.Int32 UnityEngine.TextEditor::m_SelectIndex
	int32_t ___m_SelectIndex_11;
	// System.Boolean UnityEngine.TextEditor::m_RevealCursor
	bool ___m_RevealCursor_12;
	// UnityEngine.Vector2 UnityEngine.TextEditor::graphicalCursorPos
	Vector2_t85  ___graphicalCursorPos_13;
	// UnityEngine.Vector2 UnityEngine.TextEditor::graphicalSelectCursorPos
	Vector2_t85  ___graphicalSelectCursorPos_14;
	// System.Boolean UnityEngine.TextEditor::m_MouseDragSelectsWholeWords
	bool ___m_MouseDragSelectsWholeWords_15;
	// System.Int32 UnityEngine.TextEditor::m_DblClickInitPos
	int32_t ___m_DblClickInitPos_16;
	// UnityEngine.TextEditor/DblClickSnapping UnityEngine.TextEditor::m_DblClickSnap
	uint8_t ___m_DblClickSnap_17;
	// System.Boolean UnityEngine.TextEditor::m_bJustSelected
	bool ___m_bJustSelected_18;
	// System.Int32 UnityEngine.TextEditor::m_iAltCursorPos
	int32_t ___m_iAltCursorPos_19;
	// System.String UnityEngine.TextEditor::oldText
	String_t* ___oldText_20;
	// System.Int32 UnityEngine.TextEditor::oldPos
	int32_t ___oldPos_21;
	// System.Int32 UnityEngine.TextEditor::oldSelectPos
	int32_t ___oldSelectPos_22;
};
struct TextEditor_t912_StaticFields{
	// System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp> UnityEngine.TextEditor::s_Keyactions
	Dictionary_2_t913 * ___s_Keyactions_23;
};
