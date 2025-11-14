// 函数: sub_10011060
// 地址: 0x10011060
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

uint32_t dwMilliseconds = arg2
int32_t var_2c = 0
HANDLE handles = arg1
void* var_20 = arg5

if (dwMilliseconds != 0xffffffff && dwMilliseconds != 0)
    arg1 = GetTickCount()

int32_t ecx
ecx.b = arg5 != 0
uint32_t nCount = ecx + 1
uint32_t nCount_1 = nCount
enum WAIT_EVENT eax_2 = WaitForMultipleObjects(nCount, &handles, 0, 0)

if (eax_2 u< nCount)
    return eax_2

uint32_t ebp_1 = arg4
int32_t eax_3
eax_3.b = arg3 != 0
MSG msg
enum WAIT_EVENT edi_1

while (true)
    if (dwMilliseconds u> 0xa)
        dwMilliseconds = 0xa
    
    edi_1 = MsgWaitForMultipleObjects(nCount, &handles, 0, dwMilliseconds, (eax_3 << 3) + 0x40)
    uint32_t esi_1
    
    if (edi_1 == nCount)
        esi_1 = arg2
    else
        if (edi_1 != WAIT_TIMEOUT)
            break
        
        esi_1 = arg2
        
        if (dwMilliseconds == esi_1)
            break
    
    if (arg3 != 0 && PeekMessageA(&msg, arg3, ebp_1, ebp_1, PM_REMOVE) != 0)
        BOOL i
        
        do
            DispatchMessageA(&msg)
            i = PeekMessageA(&msg, arg3, ebp_1, ebp_1, PM_REMOVE)
        while (i != 0)
    
    PeekMessageA(&msg, nullptr, 0, 0, PM_NOREMOVE)
    
    if (esi_1 != 0xffffffff && esi_1 != 0)
        HANDLE eax_7 = GetTickCount()
        int32_t ecx_4 = eax_7 - arg1
        
        if (ecx_4 u<= esi_1)
            arg2 = esi_1 - ecx_4
        else
            arg2 = 0
        
        arg1 = eax_7
    
    if (var_2c == 0)
        int32_t eax_9 = GetThreadPriority(GetCurrentThread())
        arg4 = eax_9
        
        if (eax_9 u< 2)
            SetThreadPriority(GetCurrentThread(), THREAD_PRIORITY_HIGHEST)
        
        var_2c = 1
    
    nCount = nCount_1
    edi_1 = WaitForMultipleObjects(nCount, &handles, 0, 0)
    
    if (edi_1 u< nCount)
        break
    
    dwMilliseconds = arg2

if (var_2c != 0)
    SetThreadPriority(GetCurrentThread(), arg4)
    
    if (((GetQueueStatus(QS_POSTMESSAGE) u>> 0x10).b & 8) != 0)
        uint32_t eax_15 = data_100224c0
        
        if (eax_15 != 0)
        label_10011248:
            bool cond:1_1
            
            do
                cond:1_1 = PeekMessageA(&msg, 0xffffffff, eax_15, eax_15, PM_REMOVE) != 0
                eax_15 = data_100224c0
            while (cond:1_1)
        else
            eax_15 = RegisterWindowMessageA("AMUnblock")
            data_100224c0 = eax_15
            
            if (eax_15 != 0)
                goto label_10011248
        
        PostThreadMessageA(GetCurrentThreadId(), eax_15, 0, 0)

return edi_1
