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

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//length for super to be active (seconds)
	float active_timer;

	//Boolean if the Super is currently Active
	bool is_active;

	//Weapon Mesh
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
		USkeletalMeshComponent* SuperWeapon;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	//Weapon Primary Attack
	virtual void primaryAttack() PURE_VIRTUAL(ASuperAbility::primaryAttack);

	//Weapon Heavy Attach
	virtual void heavyAttack() PURE_VIRTUAL(ASuperAbility::heavyAttack);

	//Activate Super
	virtual void activate() PURE_VIRTUAL(ASuperAbility::activate);

	//Deactivate Super
	virtual void deactivate() PURE_VIRTUAL(ASuperAbility::deactivate);

	//Get is Active variable
	virtual bool get_is_active()
	{
		return is_active;
	};

	//Set is Active variable
	virtual void set_is_active(bool new_is_active)
	{
		is_active = new_is_active;
	};

};
