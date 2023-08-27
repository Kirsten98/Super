// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SuperEnemy.generated.h"

UCLASS()
class ASuperEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASuperEnemy();

	// Getter for Health
	int get_health();

	//Setter for Health. If updated_health is less than 0, is_dead is true 
	void set_health(int updated_health);

	//Getter for is_dead
	bool get_is_dead();

	// Setter for is_dead
	void set_is_dead(bool updated_is_dead);

	//Getter for is_dead
	bool get_movement_speed();

	// Setter for is_dead
	void set_movement_speed(float updated_movement_speed);

	//Updates Enemies health based on the damage taken
	void take_damage(int damage_taken);

	//Stops the character from taking input for movement
	void disable_movement();

	//Allows the player to receive input for movement
	void enable_movement();
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	int health = 100;

	bool is_dead = false;

	float movement_speed = 1.0f;
};
