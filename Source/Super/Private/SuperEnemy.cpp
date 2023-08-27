
// Fill out your copyright notice in the Description page of Project Settings.


#include "SuperEnemy.h"

// Sets default values
ASuperEnemy::ASuperEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASuperEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASuperEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASuperEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ASuperEnemy::take_damage(int damage_taken)
{
	//Actor cannot take a negative amount of damage. 
	if (damage_taken > 0)
	{
		set_health(get_health() - damage_taken);
	}

}

// Getter for Health
int ASuperEnemy::get_health() {
	return health;
}

//Setter for Health. If updated_health is less than 0, is_dead is true 
void ASuperEnemy::set_health(int updated_health)
{
	//If health is below 0, the enemy is dead
	if (updated_health < 0)
	{
		health = 0;
		set_is_dead(true);
	}
	else {
		health = updated_health;
	}

}

//Getter for is_dead
bool ASuperEnemy::get_is_dead() {
	return is_dead;
}

// Setter for is_dead
void ASuperEnemy::set_is_dead(bool updated_is_dead)
{
	is_dead = updated_is_dead;
}

//Getter for is_dead
bool ASuperEnemy::get_movement_speed() {
	return movement_speed;
}

// Setter for is_dead
void ASuperEnemy::set_movement_speed(float updated_movement_speed)
{
	//Movement Speed cannot be less than 0
	if (updated_movement_speed >= 0)
	{
		movement_speed = updated_movement_speed;
	}

}

//Stops the character from taking input for movement
void ASuperEnemy::disable_movement()
{

}

//Allows the player to receive input for movement
void ASuperEnemy::enable_movement()
{

}