// 函数: ?GrantAllocation@SchedulerProxy@details@Concurrency@@QAEPAVExecutionResource@23@I_N0@Z
// 地址: 0x6f6616
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct Concurrency::IExecutionResource::Concurrency::details::ExecutionResource::VTable** result =
    nullptr
int32_t var_4c = arg2
int32_t var_18 = 0
int32_t ecx_3
int32_t edx

if (arg4 == 0)
    edx = arg3
    ecx_3 = 0
else
    edx = arg3
    int32_t ecx_1 = Concurrency::details::SchedulerProxy::MinVprocHWThreads(arg1) + arg1[0x2e]
    ecx_3 = neg.d(sbb.d(ecx_1, ecx_1, ecx_1 u< arg1[0x28] + edx))

int32_t esi_1 = sbb.d(arg2, arg2, ecx_3 u< edx) & (edx - ecx_3)
char var_7_1

if (ecx_3 != 0)
    var_7_1 = 1

if (ecx_3 == 0 || edx != 0)
    var_7_1 = 0

edx.b = arg4
char var_6_1

if (edx.b != 0)
    var_6_1 = 1

if (edx.b == 0 || ecx_3 != 0)
    var_6_1 = 0

void* var_10 = nullptr
int32_t var_44 = 0xffffffff
int32_t var_14 = 0xffffffff
int32_t var_1c
int32_t ecx_4

if (edx.b == 0)
    var_1c = 0xffffffff
else
    int32_t eax_6
    eax_6, ecx_4 = Concurrency::details::ResourceManager::GetCurrentNodeAndCore(arg1[3], nullptr)
    var_1c = eax_6

int32_t var_2c = 0
int32_t edx_2

if (esi_1 != 0)
    int32_t eax_7 = arg1[0x29]
    
    if (esi_1 u> eax_7)
        int32_t ecx_6 = arg1[0x24]
        edx_2 = (esi_1 - eax_7) * (ecx_6 - 1) + ecx_6 * arg1[0x29]
    else
        edx_2 = arg1[0x24] * esi_1
    
    var_2c = edx_2

int32_t var_30

if (esi_1 == 0 || edx_2 == 0)
    var_30 = 0
else
    int32_t ecx_7
    ecx_7.b = mulu.dp.d(edx_2, 4) u>> 0x20 != 0
    int32_t var_54_1 = neg.d(ecx_7) | (edx_2 * 4)
    var_30 = sub_6e8787()

int32_t esi_2 = 0
int32_t eax_12 = arg3
ecx_4.b = arg4 == 0
int32_t var_3c = 0
char var_5 = ecx_4.b
int32_t var_28 = 0

while (true)
    int32_t var_c_1 = esi_2
    
    if (var_18 u>= eax_12 && ecx_4.b != 0)
        break
    
    if (esi_2 u>= arg1[0x30])
        break
    
    void* edx_7 = arg1[4] + var_28
    void* var_40_1 = edx_7
    
    if (*(edx_7 + 0x18) u> 0 || *(edx_7 + 0x1c) u> 0)
        ecx_4 = 0
        int32_t var_24_1 = 0
        
        while (true)
            int32_t var_20_1 = ecx_4
            
            if (var_18 u>= eax_12 && var_5 != 0)
                break
            
            if (ecx_4 u>= *(edx_7 + 4))
                break
            
            int32_t* esi_4 = *(edx_7 + 0x30) + var_24_1
            
            if (*esi_4 == 3)
                if (var_5 != 0 || (var_18 != eax_12 - 1 && var_1c != var_c_1))
                    eax_12.b = 0
                    ecx_4.b = 1
                else
                    eax_12.b = 1
                    
                    if (ecx_3 == 0)
                        ecx_4.b = 1
                    else
                        ecx_4.b = 0
                
                *esi_4 = 4
                *(edx_7 + 0x1c) += 1
                arg1[0x28] += 1
                
                if (eax_12.b != 0)
                    var_10 = edx_7
                    var_14 = var_20_1
                    var_5 = 1
                
                if (ecx_4.b != 0)
                    int32_t eax_14 = arg1[0x29]
                    int32_t i_2 = arg1[0x24]
                    
                    if (eax_14 == 0)
                        i_2 -= 1
                    else
                        arg1[0x29] = eax_14 - 1
                    
                    esi_4[9] += i_2
                    arg1[0x2c] += i_2
                    int32_t i_3 = i_2
                    
                    if (i_2 != 0)
                        int32_t i_1 = i_2
                        int32_t i
                        
                        do
                            int32_t esi_5 = *(*arg1 + 0x18)
                            j_sub_4033e0()
                            *(var_30 + (var_3c << 2)) = esi_5(edx_7, var_20_1)
                            var_3c += 1
                            edx_7 = var_40_1
                            i = i_1
                            i_1 -= 1
                        while (i != 1)
                        result = nullptr
                
                var_18 += 1
                ecx_4 = var_20_1
                eax_12 = arg3
                esi_2 = var_c_1
            else if (*esi_4 != 4)
                esi_2 = var_c_1
            else if (var_6_1 != 0)
                int32_t eax_19 = esi_4[0xb] + esi_4[9]
                
                if (eax_19 u< var_44)
                label_6f6847:
                    var_44 = eax_19
                    var_10 = edx_7
                    var_14 = ecx_4
                else if (eax_19 == var_44 && var_c_1 == var_1c)
                    goto label_6f6847
                
                eax_12 = arg3
                esi_2 = var_c_1
            else if (var_7_1 == 0 || esi_4[0xa] u> 0)
                esi_2 = var_c_1
            else
                esi_2 = var_c_1
                
                if (var_10 == 0 || esi_2 == var_1c)
                    eax_12 = arg3
                    var_10 = edx_7
                    var_14 = ecx_4
                    
                    if (esi_2 == var_1c)
                        var_5 = 1
            
            ecx_4 += 1
            var_24_1 += 0x34
        
        ecx_4.b = var_5
        *(edx_7 + 0x18) = 0
    
    esi_2 += 1
    var_28 += 0x34

if (var_2c != 0)
    Concurrency::details::SchedulerProxy::AddVirtualProcessorRoots(arg1, var_30, var_2c)
    _free(var_30)

if (arg4 == 0)
    return result

if (var_6_1 == 0 && var_7_1 != 0)
    sub_6f6aac(arg1, var_10, var_14)
    *(var_14 * 0x34 + *(var_10 + 0x30)) = 4
    *(var_10 + 0x1c) += 1
    arg1[0x28] += 1

return Concurrency::details::SchedulerProxy::CreateExternalThreadResource(arg1, var_10, var_14)
