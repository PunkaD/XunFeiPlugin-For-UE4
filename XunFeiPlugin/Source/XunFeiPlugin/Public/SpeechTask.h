#pragma once

#include "XunFeiSpeech.h"
#include "AsyncWork.h"

class XUNFEIPLUGIN_API FSpeechTask : public FNonAbandonableTask
{

	friend class FAutoDeleteAsyncTask<FSpeechTask>;

	FSpeechTask()
	{
		UE_LOG(XunFeiPluginLog, Warning, TEXT("Speech Task be Create !"));
	}

	void DoWork();
	FORCEINLINE TStatId GetStatId() const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(FSpeechTask, STATGROUP_ThreadPoolAsyncTasks);
	}
};