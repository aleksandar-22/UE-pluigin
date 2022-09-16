#include "WordListSearch.h"
#include "Developer/Settings/Public/ISettingsModule.h"
#include "UObject/Package.h"
	
IMPLEMENT_MODULE(WordListSearch, WordListSearch);

#define LOCTEXT_NAMESPACE "WordListSearch"

void WordListSearch::StartupModule()
{

}

void WordListSearch::ShutdownModule()
{
	if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	{
		SettingsModule->UnregisterSettings("Project", "Plugins", "WordListSearch");
	}

	if (!GExitPurge)
	{
	}
	else
	{
	}
}
