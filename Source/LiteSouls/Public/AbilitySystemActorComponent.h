// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AbilitySystemActorComponent.generated.h"

UENUM(BlueprintType)
enum class ESelectedAbility : uint8
{
	None,
	LightAttack,
	JumpAttack,
	Fireball,
	BowAndArrow
};

UCLASS(Blueprintable)
class LITESOULS_API UAbilitySystemActorComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAbilitySystemActorComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
