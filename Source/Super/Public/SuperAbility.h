// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SuperAbility.generated.h"

UCLASS()
class SUPER_API ASuperAbility : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASuperAbility();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	float active_timer = 30;

	bool is_active = false;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Weapon Mesh
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
		USkeletalMeshComponent* SuperWeapon;
	
	//Weapon Primary Attack
	void primaryAttack();

	//Weapon Heavy Attach
	void heavyAttack();

	//Activate Super
	void activate();

	//Deactivate Super
	void deactivate();

	//Get is Active variable
	bool get_is_active();

	//Set is Active variable
	void set_is_active(bool new_is_active);

};
