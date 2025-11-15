// 函数: sub_6e97bb
// 地址: 0x6e97bb
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_8 = ecx
int32_t ebx
ebx.b = 0
int32_t eax = *(arg2 + 0x14)
*(arg2 + 0x14) += 1

if (eax == 0)
    int32_t* eax_2 = *(arg2 + 4)
    ebx.b = 1
    int32_t* var_8_1 = eax_2
    *(arg2 + 0x29) = 1
    
    if (eax_2 != 0)
        *(arg2 + 0xc) = 0
        int32_t esi_1 = *(*eax_2 + 0xc)
        j_sub_4033e0()
        esi_1()

int32_t result = Concurrency::details::MultiWaitBlock::NotifyCompletedNode(arg2)

if (ebx.b != 0)
    result = Concurrency::details::UnRegisterAsyncTimerAndUnloadLibrary(arg1, arg3)

return result
