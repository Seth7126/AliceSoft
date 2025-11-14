// 函数: sub_442ea0
// 地址: 0x442ea0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* var_28 = &var_4
enum WAIT_EVENT hHandle

while (*(arg1 + 0x24) != 0xffffffff)
    if (*(arg1 + 0x28) u>= *(arg1 + 0x2c))
        break
    
    hHandle = *(arg1 + 0x10)
    
    if (hHandle != WAIT_OBJECT_0 && WaitForSingleObject(hHandle, 1) == WAIT_OBJECT_0)
        EnterCriticalSection(*(arg1 + 0x18) + 4)
        int32_t ebp_1 = 0x1e - *(arg1 + 0xa54)
        LeaveCriticalSection(*(arg1 + 0x18) + 4)
        int32_t var_1c_1 = 0
        
        if (ebp_1 s> 0)
            int32_t esi_2
            
            do
                hHandle = sub_4432d0(arg1)
                int32_t var_18 = 0
                enum WAIT_EVENT hHandle_1 = hHandle
                
                if (hHandle == WAIT_OBJECT_0)
                    break
                
                if (sub_4424f0(arg1 + 0x1c, hHandle, &var_18) == 0)
                    *var_28
                    return 0
                
                EnterCriticalSection(*(arg1 + 0x18) + 4)
                int32_t* eax_7
                int32_t ecx_3
                eax_7, ecx_3 = sub_442a00(&var_18)
                int32_t* var_34_6 = eax_7
                void* var_38_3 = &eax_7[4]
                void** var_10
                sub_430ad0(arg1 + 0xa50, &var_10, ecx_3)
                LeaveCriticalSection(*(arg1 + 0x18) + 4)
                esi_2 = var_1c_1 + 1
                var_1c_1 = esi_2
            while (esi_2 s< ebp_1)

hHandle.b = 1
*var_28
return hHandle
