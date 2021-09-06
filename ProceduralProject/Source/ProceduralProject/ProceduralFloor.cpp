// Fill out your copyright notice in the Description page of Project Settings.


#include "ProceduralFloor.h"

ProceduralFloor::ProceduralFloor()
{
}

ProceduralFloor::~ProceduralFloor()
{
}

void ProceduralFloor::Partition()
{
}

int32 ProceduralFloor::CoinFlip()
{
	return int32();
}

bool ProceduralFloor::ShouldSplitNode(TSharedPtr<FloorNode> InNode, ESplitOrientation Orientation)
{
	return false;
}

bool ProceduralFloor::SplitAttempt(TSharedPtr<FloorNode> InNode)
{
	return false;
}

bool ProceduralFloor::SplitHorizontal(TSharedPtr<FloorNode> InA, TSharedPtr<FloorNode> InB, TSharedPtr<FloorNode> InC)
{
	return false;
}

bool ProceduralFloor::SplitVertical(TSharedPtr<FloorNode> InA, TSharedPtr<FloorNode> InB, TSharedPtr<FloorNode> InC)
{
	return false;
}
