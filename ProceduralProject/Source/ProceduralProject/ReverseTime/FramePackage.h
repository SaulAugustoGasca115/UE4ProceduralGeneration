// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Math/Vector.h"
#include "Math/Rotator.h"
#include "Math/Vector2D.h"

/**
 * 
 */

struct FFramePackage
{
	FORCEINLINE FFramePackage();
	FORCEINLINE FFramePackage(FVector InLocation,FRotator InRotation,FVector InLinearVelocity,FVector InAngularVelocity,float DeltaTime);

	FVector Location;
	FRotator Rotation;
	FVector LinearVelocity;
	FVector AngularVelocity;

	bool bIsPlayerPawn;
	FVector2D MouseXY;

	float DeltaTime;
};

class PROCEDURALPROJECT_API FramePackage
{
public:
	FramePackage();
	~FramePackage();
};
