// 函数: sub_4064c0
// 地址: 0x4064c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx
int32_t var_14 = ebx

while (true)
    EnterCriticalSection(*(arg1 + 8) + 4)
    
    if (*(arg1 + 0x10) != 0 || *(arg1 + 0x30) != 0)
        ebx.b = 1
    else
        ebx.b = 0
    
    LeaveCriticalSection(*(arg1 + 8) + 4)
    enum WAIT_EVENT result
    
    if (ebx.b == 0)
        HANDLE handles = *(arg1 + 0x1c)
        int32_t var_4_1 = *(arg1 + 0x24)
        result = WaitForMultipleObjects(2, &handles, 0, 0xffffffff)
    
    if (ebx.b == 0 && result == WAIT_OBJECT_0)
        return result
    
    HANDLE hHandle = *(arg1 + 0x1c)
    
    if (hHandle != 0)
        result = WaitForSingleObject(hHandle, 0)
        
        if (result == WAIT_OBJECT_0)
            return result
    
    EnterCriticalSection(*(arg1 + 8) + 4)
    
    if (*(arg1 + 0x10) != 0)
        void* eax_12 = **(arg1 + 0xc)
        void* var_10_1 = eax_12
        *(arg1 + 0x14) = *(eax_12 + 8)
        int32_t* eax_15 = **(arg1 + 0xc)
        int32_t* var_c_1 = eax_15
        *eax_15[1] = *eax_15
        *(*eax_15 + 4) = eax_15[1]
        *(arg1 + 0x10) -= 1
        sub_403160(eax_15, 1, 0xc)
        *(arg1 + 0x30) = 1
        LeaveCriticalSection(*(arg1 + 8) + 4)
        (*(**(arg1 + 0x14) + 8))()
        (*(**(arg1 + 0x14) + 4))()
        EnterCriticalSection(*(arg1 + 8) + 4)
        *(arg1 + 0x14) = 0
        LeaveCriticalSection(*(arg1 + 8) + 4)
        *(arg1 + 0x30) = 0
    else
        LeaveCriticalSection(*(arg1 + 8) + 4)
