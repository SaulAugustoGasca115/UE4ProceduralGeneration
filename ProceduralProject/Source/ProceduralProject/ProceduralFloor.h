// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FloorNode.h"


/**
 * 
 */
enum class ESplitOrientation
{
	ESO_Horizontal,
	ESO_Vertical
};


class PROCEDURALPROJECT_API ProceduralFloor
{
public:
	ProceduralFloor();
	~ProceduralFloor();

	//function called to split the floor up
	void Partition();

	//function to determinates to split the floor horizontally or vertically
	int32 CoinFlip();

	//function to check the size of the node  and determine yes or no to split 
	bool ShouldSplitNode(TSharedPtr<FloorNode> InNode, ESplitOrientation Orientation);

	bool SplitAttempt(TSharedPtr<FloorNode> InNode);


	//Split A and then we willuse the information in A to populate theinformation in B and C ,then A will be deleted
	bool SplitHorizontal(TSharedPtr<FloorNode> InA, TSharedPtr<FloorNode> InB, TSharedPtr<FloorNode> InC);
	bool SplitVertical(TSharedPtr<FloorNode> InA, TSharedPtr<FloorNode> InB, TSharedPtr<FloorNode> InC);

	//this function is useful because once we're finished with this algorithm, we want to access to the Partitioned Floor the contains all the nodes

	FORCEINLINE TArray<TSharedPtr<FloorNode>> GetPartitionedFloor() const { return PartitionedFloor; }

private:

	TArray<TSharedPtr<FloorNode>> FloorNodeStack;
	TArray<TSharedPtr<FloorNode>> PartitionedFloor;

	int32 FloorGridSizeX;
	int32 FloorGridSizeY;
	int32 RoomMinX;
	int32 RoomMaxY;
};
