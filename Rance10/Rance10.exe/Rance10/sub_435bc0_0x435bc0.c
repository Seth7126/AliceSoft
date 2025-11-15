// 函数: sub_435bc0
// 地址: 0x435bc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp
int32_t var_4 = ebp
int32_t* var_28 = &var_4
enum WAIT_EVENT hHandle

while (*(arg1 + 0x24) != 0xffffffff)
    if (*(arg1 + 0x28) u>= *(arg1 + 0x2c))
        break
    
    if (*(arg1 + 0x43c) != 0)
        break
    
    hHandle = *(arg1 + 0x10)
    
    if (hHandle != WAIT_OBJECT_0 && WaitForSingleObject(hHandle, 1) == WAIT_OBJECT_0)
        EnterCriticalSection(*(arg1 + 0x18) + 4)
        enum WAIT_EVENT ebp_1 = 0x1e - *(arg1 + 0x9e8)
        LeaveCriticalSection(*(arg1 + 0x18) + 4)
        enum WAIT_EVENT hHandle_1 = WAIT_OBJECT_0
        
        if (ebp_1 s> WAIT_OBJECT_0)
            while (*(arg1 + 0x43c) == 0)
                hHandle = sub_436190(arg1)
                int32_t var_18 = 0
                enum WAIT_EVENT hHandle_2 = hHandle
                
                if (hHandle == WAIT_OBJECT_0)
                    break
                
                if (sub_434460(arg1 + 0x1c, hHandle, &var_18) == 0)
                    *var_28
                    return 0
                
                EnterCriticalSection(*(arg1 + 0x18) + 4)
                int32_t* eax_7
                void* ecx_3
                eax_7, ecx_3 = sub_435660(&var_18)
                int32_t* var_34_6 = eax_7
                void* var_38_3 = &eax_7[4]
                void** var_10
                sub_42f0e0(arg1 + 0x9e4, &var_10, ecx_3)
                LeaveCriticalSection(*(arg1 + 0x18) + 4)
                hHandle = hHandle_1 + 1
                hHandle_1 = hHandle
                
                if (hHandle s>= ebp_1)
                    break

hHandle.b = 1
*var_28
return hHandle
