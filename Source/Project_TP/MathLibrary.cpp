// Fill out your copyright notice in the Description page of Project Settings.


#include "MathLibrary.h"

FVector UMathLibrary::ConvertLocation(FVector const& Location, AActor* Portal, AActor* Target)
{
	return FVector();
}

FRotator UMathLibrary::ConvertRotation(FVector const& Rotation, AActor* Portal, AActor* Target)
{
	return FRotator();
}

bool UMathLibrary::CheckIsInFront(FVector const& Point, FVector const& PortalLocation, FVector const& PortalNormal)
{
	return false;
}

bool UMathLibrary::CheckIsCrossing(FVector const& Point, FVector const& PortalLocation, FVector const& PortalNormal, bool& out_LastInFront, FVector& out _LastPosition)
{
	return false;
}
