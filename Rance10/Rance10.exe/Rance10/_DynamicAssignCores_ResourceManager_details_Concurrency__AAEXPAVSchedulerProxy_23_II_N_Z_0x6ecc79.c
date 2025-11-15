// 函数: ?DynamicAssignCores@ResourceManager@details@Concurrency@@AAEXPAVSchedulerProxy@23@II_N@Z
// 地址: 0x6ecc79
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = arg1
int32_t edx = arg3
int32_t edi = 0
void* esi_1 = edx * 0x28 + *(arg1 + 0x48)
int32_t ecx = 0

while (true)
    int32_t* eax_2 = *(esi_1 + 0x20) + ecx
    
    if (*eax_2 == 2 && arg5 == 0)
    label_6eccaa:
        eax_2[4] += 1
        *eax_2 = 0
        
        if (arg5 == 0)
            *(esi_1 + 8) -= 1
        else
            *(esi_1 + 0x1c) -= 1
        
        void* result =
            Concurrency::details::SchedulerProxy::AddCore(arg2, edx * 0x34 + arg2[4], edi, arg5)
        int32_t temp1_1 = arg4
        arg4 -= 1
        
        if (temp1_1 == 1)
            return result
        
        edx = arg3
    else if (*eax_2 == 6 && arg5 != 0)
        goto label_6eccaa
    
    edi += 1
    ecx += 0x24
