// 函数: sub_6ecce8
// 地址: 0x6ecce8
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx = arg4 * 0x34
void* eax_1 = arg2[4]
void* ecx_1 = ecx + *(eax_1 + 0x10)
int32_t edx = *(ecx_1 + 0x2c)
int32_t var_10
int32_t esi

if (arg5 u>= edx)
    esi = edx
    var_10 = edx
else
    esi = arg5
    var_10 = esi

int32_t eax_4 = *(ecx_1 + 0x20) - edx
int32_t edi_1 = arg5 - esi

if (edi_1 u>= eax_4)
    edi_1 = eax_4

int32_t ecx_3 = *(ecx_1 + 0x28) - edx
int32_t esi_3 = arg5 - edi_1 - var_10
int32_t var_14 = ecx_3

if (esi_3 u< ecx_3)
    ecx_3 = esi_3
    var_14 = esi_3

void* edx_1 = ecx_1
int32_t eax_5 = 0
int32_t var_20 = 0
int32_t esi_4 = esi_3 - ecx_3
int32_t var_1c = 0

while (true)
    int32_t* ebx_2 = *(edx_1 + 0x30) + var_1c
    int32_t var_c_1 = eax_5
    
    if (*ebx_2 == 4 && ebx_2[0xa] u<= 0)
        eax_5.b = *(ebx_2 + 0x31)
        bool cond:0_1 = eax_5.b == 0
        eax_5.b = ebx_2[0xc].b
        char var_5_1 = eax_5.b
        
        if (not(cond:0_1))
            if (eax_5.b != 0 && var_10 != 0)
                var_10 -= 1
                goto label_6ecdbc
            
            if (edi_1 != 0)
                edi_1 -= 1
                goto label_6ecdbc
        else if (eax_5.b != 0 && ecx_3 != 0)
            var_14 = ecx_3 - 1
        label_6ecdbc:
            int32_t* eax_10 = *(arg1 + 0x48) + arg4 * 0x28
            int32_t ecx_5
            ecx_5.b = var_5_1
            int32_t* eax_12
            
            if (ecx_5.b != 0)
                eax_12, ecx_5 = sub_6ef604(arg1, edx_1, ebx_2, eax_10, eax_10[8] + var_20, arg2)
                edx_1 = ecx_1
                ecx_5.b = var_5_1
            
            eax_12.b = *(ebx_2 + 0x31)
            char var_28_1 = 0
            
            if (eax_12.b == 0)
                arg2[0xc] -= 1
            else
                var_28_1 = 1
                
                if (ecx_5.b == 0)
                    arg2[0xb] -= 1
                else
                    arg2[0xa] -= 1
            
            sub_6f6aac(eax_1, edx_1, var_c_1)
            void* result = Concurrency::details::SchedulerProxy::AddCore(arg3, arg3[4] + ecx, 
                var_c_1, var_28_1)
            int32_t temp1_1 = arg5
            arg5 -= 1
            
            if (temp1_1 == 1)
                return result
            
            ecx_3 = var_14
            edx_1 = ecx_1
        else if (esi_4 != 0)
            esi_4 -= 1
            goto label_6ecdbc
        
        eax_5 = var_c_1
    
    var_1c += 0x34
    eax_5 += 1
    var_20 += 0x24
