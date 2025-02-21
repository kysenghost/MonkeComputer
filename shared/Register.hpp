#pragma once
#include "../shared/ModEntry.hpp"
#include <vector>
#include <type_traits>

namespace GorillaUI
{
    class Register
    {
        public:
            template<class T>
            static void RegisterView(std::string name, std::string version) 
            {
                static_assert(std::is_convertible<T, Components::View*>());
                RegisterView({name, version}, classof(T));
            }

            template<class T>
            static void RegisterView(ModInfo info) 
            {
                static_assert(std::is_convertible<T, Components::View*>());
                RegisterView(info, classof(T));
            }

            template<class T>
            static void RegisterViewManager(std::string name, std::string version) 
            {
                static_assert(std::is_convertible<T, Components::ViewManager*>());
                RegisterViewManager({name, version}, classof(T));
            }

            template<class T>
            static void RegisterViewManager(ModInfo info) 
            {
                static_assert(std::is_convertible<T, Components::ViewManager*>());
                RegisterViewManager(info, classof(T));
            }

            template<class T>
            static void RegisterSettingsView(std::string name, std::string version) 
            {
                static_assert(std::is_convertible<T, Components::View*>());
                RegisterSettingsView({name, version}, classof(T));
            }

            template<class T>
            static void RegisterSettingsView(ModInfo info) 
            {
                static_assert(std::is_convertible<T, Components::View*>());
                RegisterSettingsView(info, classof(T));
            }

            template<class T>
            static void RegisterSettingsViewManager(std::string name, std::string version) 
            {
                static_assert(std::is_convertible<T, Components::ViewManager*>());
                RegisterSettingsViewManager({name, version}, classof(T));
            }

            template<class T>
            static void RegisterSettingsViewManager(ModInfo info) 
            {
                static_assert(std::is_convertible<T, Components::ViewManager*>());
                RegisterSettingsViewManager(info, classof(T));
            }

            template<class T>
            static void RegisterWatchView(std::string name, std::string version) 
            {
                static_assert(std::is_convertible<T, Components::View*>());
                RegisterWatchView({name, version}, classof(T));
            }

            template<class T>
            static void RegisterWatchView(ModInfo info) 
            {
                static_assert(std::is_convertible<T, Components::View*>());
                RegisterWatchView(info, classof(T));
            }

            template<class T>
            static void RegisterWatchViewManager(std::string name, std::string version) 
            {
                static_assert(std::is_convertible<T, Components::ViewManager*>());
                RegisterWatchViewManager({name, version}, classof(T));
            }

            template<class T>
            static void RegisterWatchViewManager(ModInfo info) 
            {
                static_assert(std::is_convertible<T, Components::ViewManager*>());
                RegisterWatchViewManager(info, classof(T));
            }

            static void RegisterCallback(std::string name, std::string version, ModEntry::EntryCallback callback);
            static void RegisterCallback(ModInfo info, ModEntry::EntryCallback callback);

            static void RegisterSettingsCallback(std::string name, std::string version, ModEntry::EntryCallback callback);
            static void RegisterSettingsCallback(ModInfo info, ModEntry::EntryCallback callback);

            static void RegisterWatchCallback(std::string name, std::string version, ModEntry::EntryCallback callback);
            static void RegisterWatchCallback(ModInfo info, ModEntry::EntryCallback callback);

            static std::vector<ModEntry>& get_entries();
            static std::vector<ModEntry>& get_settingsEntries();
            static std::vector<ModEntry>& get_watchEntries();

            static ModEntry& get_entry(int index);
            static ModEntry& get_settingsEntry(int index);
            static ModEntry& get_watchEntry(int index);
            
        private:
            static inline std::vector<ModEntry> entries = {};
            static inline std::vector<ModEntry> settingsentries = {};
            static inline std::vector<ModEntry> watchentries = {};

            static void RegisterView(ModInfo info, Il2CppClass* klass);
            static void RegisterView(std::string name, std::string version, Il2CppClass* klass);
            static void RegisterViewManager(ModInfo info, Il2CppClass* klass);
            static void RegisterViewManager(std::string name, std::string version, Il2CppClass* klass);
            
            static void RegisterSettingsView(ModInfo info, Il2CppClass* klass);
            static void RegisterSettingsView(std::string name, std::string version, Il2CppClass* klass);
            static void RegisterSettingsViewManager(ModInfo info, Il2CppClass* klass);
            static void RegisterSettingsViewManager(std::string name, std::string version, Il2CppClass* klass);

            static void RegisterWatchView(ModInfo info, Il2CppClass* klass);
            static void RegisterWatchView(std::string name, std::string version, Il2CppClass* klass);
            static void RegisterWatchViewManager(ModInfo info, Il2CppClass* klass);
            static void RegisterWatchViewManager(std::string name, std::string version, Il2CppClass* klass);
    };
}