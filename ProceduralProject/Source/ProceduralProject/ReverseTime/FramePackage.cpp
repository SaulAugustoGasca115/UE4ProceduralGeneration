// Fill out your copyright notice in the Description page of Project Settings.


#include "FramePackage.h"

FramePackage::FramePackage()
{
}

FramePackage::~FramePackage()
{
}

FFramePackage::FFramePackage()
{

}

FFramePackage::FFramePackage(FVector InLocation, FRotator InRotation, FVector InLinearVelocity, FVector InAngularVelocity, float DeltaTime):
	Location(InLocation),Rotation(InRotation),LinearVelocity(InLinearVelocity),AngularVelocity(InAngularVelocity),DeltaTime(DeltaTime)
{

}
