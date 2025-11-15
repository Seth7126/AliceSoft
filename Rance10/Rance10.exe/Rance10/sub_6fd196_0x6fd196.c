// 函数: sub_6fd196
// 地址: 0x6fd196
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_8 = arg1
void* var_c = arg1
int32_t var_8_1 = 0
var_c = 8

if (*(arg1 + 0x24) != 0)
    return 

int32_t esi_1 = *(**(arg1 + 4) + 0x10)
j_sub_4033e0()
sub_6eb375(esi_1(arg1 | 1))

while (*(arg1 + 0x24) == 0)
    int32_t esi_2 = *(**(arg1 + 0x40) + 0xc)
    j_sub_4033e0()
    esi_2(arg1)
    int32_t esi_3 = *(**(arg1 + 0x40) + 0x10)
    j_sub_4033e0()
    esi_3(&var_c)
    void* esi_4 = *(arg1 + 0x10)
    *(arg1 + 0x40) = 0
    *(arg1 + 0x10) = 0
    sub_6fd237(arg1)
    
    if (esi_4 == 0)
        Concurrency::details::ThreadProxy::SuspendExecution(arg1)
    else
        Concurrency::details::FreeVirtualProcessorRoot::ResetOnIdle(esi_4, 1)
