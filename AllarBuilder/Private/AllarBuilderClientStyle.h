// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "SlateBasics.h"
#include "SlateStyle.h"

/** Slate styles for the crash report client app */
class FAllarBuilderClientStyle
{
public:
	/**
	* Set up specific styles for the crash report client app
	*/
	static void Initialize();

	/**
	* Tidy up on shut-down
	*/
	static void Shutdown();

	/*
	* Access to singleton style object
	*/
	static const ISlateStyle& Get();
	static const TSharedPtr<FSlateStyleSet> GetPtr();

private:
	static TSharedRef< FSlateStyleSet > Create();

	/** Singleton style object */
	static TSharedPtr<FSlateStyleSet> StyleSet;
};