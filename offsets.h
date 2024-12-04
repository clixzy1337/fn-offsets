#pragma once
#include <Windows.h>

namespace offsets
{
	uintptr_t UWORLD = 0x13743D18;    
	uintptr_t GObjects = 0x130C2A80; 

	uintptr_t LocalPawn = 0x350;
	uintptr_t PlayerController = 0x30;
	uintptr_t LocalPlayers = 0x38;
	uintptr_t PlayerState = 0x2C8;
	uintptr_t GameState = 0x178;
	uintptr_t GameInstance = 0x1f0;
	uintptr_t PlayerArray = 0x2C0;
	uintptr_t TeamIndex = 0x1261;
	uintptr_t CameraManager = 0x348;
	uintptr_t CachedActor = 0x308;
	uintptr_t RootComponent = 0x1B0;
	uintptr_t ActorCount = 0xA8;
	uintptr_t BoneArray = 0x5A8;    
	uintptr_t Actor = 0xA0;
	uintptr_t Mesh = 0x328;
	uintptr_t AActor = 0xA8;
	uintptr_t PersistentLevel = 0x40;
	uintptr_t RelativeLocation = 0x120;
	uintptr_t ComponetToWorld = 0x1E0;    
	uintptr_t PawnPrivate = 0x320;
	uintptr_t Last_Render_Time = 0x2E8;
	uintptr_t Last_Render_Time_On_Screen = 0x2F0;
	uintptr_t Velocity = 0x180;    
	uintptr_t DefaultFOV = 0x2BC;    
	uintptr_t CurrentWeapon = 0xA80;    
	uintptr_t bIsReloadingWeapon = 0x3B9;    
	uintptr_t bIsEquippingWeapon = 0x3A0;    
	uintptr_t bIsChargingWeapon = 0x3B8;    
	uintptr_t WeaponData = 0x568;
	uintptr_t AmmoCount = 0x104C;    
	uintptr_t bIsTargeting = 0x1FD4;    
	uintptr_t bIsCrouched = 0x440;    
	uintptr_t bIsDying = 0x718;    
	uintptr_t bIsHiddenForDeath = 0x718;    
	uintptr_t bIsKnockedback = 0x719;    
	uintptr_t bIsStaggered = 0x719;    
	uintptr_t bIsSliding = 0x71B;    
	uintptr_t bWeaponHolstered = 0x961;    
	uintptr_t bIsDBNO = 0x962;    
	uintptr_t LastRevivedFromDBNOTime = 0x4D08;    
	uintptr_t bIsJumping = 0xA78;    
	uintptr_t bIsABot = 0x2B2;    
	uintptr_t GlobalAnimRateScale = 0x9F0;    
	uintptr_t CustomTimeDilation = 0x68;
	uintptr_t LastSubmitTime = 0x2E8;
	uintptr_t LastRenderTimeOnScreen = 0x2E0;
	uintptr_t LocalActorPos = 0x120;
	uintptr_t PlayerName = 0xAA8;
	uintptr_t ProjectileSpeed = 0x1B3C;
	uintptr_t ProjectileGravity = 0x1B40;
	uintptr_t ReticleDefaultColor = 0x800;
	uintptr_t TargetedFortPawn = 0x18E8;
	uintptr_t LocationUnderReticle = 0x26F0;
	uintptr_t HabaneroComponent = 0xA10;

}
