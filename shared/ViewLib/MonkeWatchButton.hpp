#pragma once

#include "custom-types/shared/macros.hpp"
#include "../ViewLib/MonkeWatch.hpp"
#include "../EKeyboardKey.hpp"
#include "../typedefs.h"

#include "UnityEngine/Material.hpp"
#include "UnityEngine/Color.hpp"
#include "UnityEngine/Collider.hpp"
#include "GlobalNamespace/GorillaTriggerBox.hpp"

namespace GorillaUI
{
    class CustomComputer;   
}

DECLARE_CLASS_CODEGEN(GorillaUI::Components, MonkeWatchButton, GlobalNamespace::GorillaTriggerBox,
    DECLARE_METHOD(void, OnTriggerEnter, UnityEngine::Collider* collider);
    DECLARE_METHOD(void, OnTriggerExit, UnityEngine::Collider* collider);
    DECLARE_METHOD(void, Awake);
    DECLARE_METHOD(void, BumpIn);
    DECLARE_METHOD(void, BumpOut);
    DECLARE_INSTANCE_FIELD(bool, isOnCooldown);
    DECLARE_INSTANCE_FIELD(bool, functionKey);
    DECLARE_INSTANCE_FIELD(UnityEngine::Material*, material);
    DECLARE_INSTANCE_FIELD(float, pressTime);
    
    public:
        EKeyboardKey key;
        void Init(GorillaUI::MonkeWatch* watch);

    private:
        UnityEngine::Color originalColor;
        SafePtr<GorillaUI::MonkeWatch> watch;

    REGISTER_FUNCTION(
        REGISTER_METHOD(OnTriggerEnter);
        REGISTER_METHOD(OnTriggerExit);
        REGISTER_METHOD(Awake);
        REGISTER_METHOD(BumpIn);
        REGISTER_METHOD(BumpOut);
        REGISTER_FIELD(isOnCooldown);
        REGISTER_FIELD(material);
        REGISTER_FIELD(pressTime);
        REGISTER_FIELD(functionKey);
    )
)