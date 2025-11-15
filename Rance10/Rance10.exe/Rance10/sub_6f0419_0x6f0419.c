// 函数: sub_6f0419
// 地址: 0x6f0419
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_8 = arg1
void* var_c = arg1

if (j_Concurrency::details::ResourceManager::Version() s< 3)
    return Concurrency::details::platform::__ChangeTimerQueueTimer(nullptr, *(arg1 + 0x1e0), arg2, 
        0x7fffffff)

void* eax_1
int32_t edx_1
eax_1, edx_1 = __allmul(arg2, 0, 0xffffd8f0, 0xffffffff)
var_c = eax_1
int32_t var_8_1 = edx_1
return ___crtSetThreadpoolTimer(*(arg1 + 0x1e0), &var_c, 0x7fffffff, 0)
