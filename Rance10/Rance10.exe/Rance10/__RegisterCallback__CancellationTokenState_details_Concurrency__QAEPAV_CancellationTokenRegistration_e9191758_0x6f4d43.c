// 函数: ?_RegisterCallback@_CancellationTokenState@details@Concurrency@@QAEPAV_CancellationTokenRegistration@23@P6AXPAX@Z0H@Z
// 地址: 0x6f4d43
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_8 = arg1
struct Concurrency::details::_RefCounter::VTable** eax = sub_6e810c(0x74)
struct Concurrency::details::_RefCounter::VTable** var_8_1 = eax
struct Concurrency::details::_CancellationTokenRegistration::Concurrency::details::CancellationTokenRegistration_TaskProc::VTable
    ** result

if (eax == 0)
    result = nullptr
else
    result = Concurrency::details::CancellationTokenRegistration_TaskProc::CancellationTokenRegistration_TaskProc(
        eax, arg2, arg3, arg4)

sub_6974a0(arg1, result)
return result
