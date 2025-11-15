// 函数: ?GetTopologyInformation@ResourceManager@details@Concurrency@@CAXW4_LOGICAL_PROCESSOR_RELATIONSHIP@@@Z
// 地址: 0x6ed78b
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

SYSTEM_LOGICAL_PROCESSOR_INFORMATION* result

if (data_7fc2d8 s< 4)
    result = Concurrency::details::platform::__GetLogicalProcessorInformation(&data_7fc2dc)
else
    result = Concurrency::details::platform::__GetLogicalProcessorInformationEx(arg1, &data_7fc2dc)

data_7fc2e0 = result
return result
