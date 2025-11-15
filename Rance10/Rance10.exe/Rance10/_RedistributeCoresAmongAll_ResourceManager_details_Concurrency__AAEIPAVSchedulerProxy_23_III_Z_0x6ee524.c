// 函数: ?RedistributeCoresAmongAll@ResourceManager@details@Concurrency@@AAEIPAVSchedulerProxy@23@III@Z
// 地址: 0x6ee524
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_28 = 0
int32_t ecx = *(arg1 + 8)

if (ecx u<= 1)
    return 

int32_t esi_1 = 1
int32_t ebx_1 = arg4
int32_t* edi_2 = *(arg1 + 0x54) + 4
int32_t var_c_1 = arg3
int32_t i_2 = ecx - 1
int32_t eax_8
int32_t i

do
    void* eax_2 = *(*edi_2 + 0x10)
    int32_t ecx_2 = *(eax_2 + 0xb8)
    int32_t eax_4 = Concurrency::details::SchedulerProxy::MinVprocHWThreads(eax_2) + ecx_2
    int32_t edx_3 = *(eax_2 + 0xa0) - *(eax_2 + 0xa8)
    
    if (edx_3 u<= eax_4)
        eax_8 = var_c_1
    else
        esi_1 += 1
        ebx_1 += Concurrency::details::SchedulerProxy::MinVprocHWThreads(eax_2) + ecx_2
        eax_8 = var_c_1 + edx_3
        var_c_1 = eax_8
    
    edi_2 = &edi_2[1]
    i = i_2
    i_2 -= 1
while (i != 1)
int32_t ebx_2 = 1

if (esi_1 u<= 1 || ebx_1 u> eax_8)
    return 

int32_t ecx_5
ecx_5.b = mulu.dp.d(esi_1, 4) u>> 0x20 != 0
int32_t var_58_1 = neg.d(ecx_5) | (esi_1 * 4)
int32_t* edi_3 = sub_6e8787()
long double x87_r7_1 = float.t(arg5)
int32_t* var_14_2 = edi_3
void* ecx_8 = **(arg1 + 0x54)
*edi_3 = ecx_8

if (arg5 s< 0)
    x87_r7_1 = x87_r7_1 + fconvert.t(4294967296.0)

*(ecx_8 + 0x20) = fconvert.d(x87_r7_1)
double var_38_1 = fconvert.d(fconvert.t(*(*edi_3 + 0x20)) + fconvert.t(0.0))

if (*(arg1 + 8) u> 1)
    void* esi_2 = &edi_3[1]
    int32_t i_1 = 1
    
    do
        void* ecx_9 = *(*(*(arg1 + 0x54) + (i_1 << 2)) + 0x10)
        int32_t eax_17 = Concurrency::details::SchedulerProxy::MinVprocHWThreads(ecx_9)
        
        if (*(ecx_9 + 0xa0) - *(ecx_9 + 0xa8) u> eax_17 + *(ecx_9 + 0xb8))
            *esi_2 = ecx_9 + 0x40
            esi_2 += 4
            var_38_1 = fconvert.d(fconvert.t(*(ecx_9 + 0x60)) + fconvert.t(var_38_1))
        
        i_1 += 1
    while (i_1 u< *(arg1 + 8))
    
    edi_3 = var_14_2
    ebx_2 = 1

int32_t edx_6 = var_c_1
long double x87_r6_1 = float.t(var_c_1)

if (edx_6 s< 0)
    x87_r6_1 = x87_r6_1 + fconvert.t(4294967296.0)

long double x87_r6_2 = fconvert.t(fconvert.d(x87_r6_1))
double var_40_2 = fconvert.d(x87_r6_2)

while (true)
    long double x87_r7_5 = x87_r6_2 / x87_r6_2
    int32_t ecx_12 = 0
    
    if (esi_1 != 0)
        do
            void* eax_21 = edi_3[ecx_12]
            ecx_12 += 1
            *(eax_21 + 8) = fconvert.d(fconvert.t(*(eax_21 + 0x20)) * x87_r7_5)
        while (ecx_12 u< esi_1)
    
    int32_t var_58_2 = edx_6
    Concurrency::details::ResourceManager::RoundUpScaledAllocations(edi_3, esi_1)
    char edx_7 = 0
    char var_5_1 = 0
    int32_t ecx_13 = 1
    
    if (esi_1 u> 1)
        do
            void* eax_22 = edi_3[ecx_13]
            void* eax_23 = *(eax_22 + 0x10)
            int32_t edi_5 = *(eax_23 + 0xa0) - *(eax_23 + 0xa8)
            int32_t edi_6 = *(eax_22 + 4)
            edi_3 = var_14_2
            
            if (edi_6 u> edi_5)
                long double x87_r7_7 = float.t(edi_5)
                
                if (edi_5 s< 0)
                    x87_r7_7 = x87_r7_7 + fconvert.t(4294967296.0)
                
                long double x87_r6_5 = float.t(edi_6)
                
                if (edi_6 s< 0)
                    x87_r6_5 = x87_r6_5 + fconvert.t(4294967296.0)
                
                edx_7 = 1
                long double x87_r7_9 =
                    fconvert.t(fconvert.d(x87_r7_7)) / fconvert.t(fconvert.d(x87_r6_5))
                var_38_1 = fconvert.d(fconvert.t(var_38_1)
                    - (float.t(1) - x87_r7_9) * fconvert.t(*(eax_22 + 0x20)))
                *(eax_22 + 0x20) = fconvert.d(x87_r7_9 * fconvert.t(*(eax_22 + 0x20)))
            
            ecx_13 += 1
        while (ecx_13 u< esi_1)
        
        x87_r6_2 = fconvert.t(var_40_2)
        var_5_1 = edx_7
        edx_6 = var_c_1
        
        if (edx_7 != 0)
            continue
    
    int32_t eax_35 = 0
    int32_t var_1c_2 = 0
    
    if (esi_1 != 0)
        char edx_8
        
        do
            void* eax_28 = edi_3[eax_35]
            void* ecx_14 = *(eax_28 + 0x10)
            int32_t eax_29 = *(eax_28 + 4)
            
            if (eax_29 u<= Concurrency::details::SchedulerProxy::DesiredHWThreads(ecx_14))
                edx_8 = var_5_1
            else
                int32_t eax_31 = Concurrency::details::SchedulerProxy::DesiredHWThreads(ecx_14)
                long double x87_r7_13 = float.t(eax_31)
                
                if (eax_31 s< 0)
                    x87_r7_13 = x87_r7_13 + fconvert.t(4294967296.0)
                
                long double x87_r6_11 = float.t(eax_29)
                
                if (eax_29 s< 0)
                    x87_r6_11 = x87_r6_11 + fconvert.t(4294967296.0)
                
                edx_8 = 1
                long double x87_r7_15 =
                    fconvert.t(fconvert.d(x87_r7_13)) / fconvert.t(fconvert.d(x87_r6_11))
                var_5_1 = 1
                var_38_1 = fconvert.d(fconvert.t(var_38_1)
                    - (float.t(1) - x87_r7_15) * fconvert.t(*(eax_28 + 0x20)))
                *(eax_28 + 0x20) = fconvert.d(x87_r7_15 * fconvert.t(*(eax_28 + 0x20)))
            
            eax_35 = var_1c_2 + 1
            var_1c_2 = eax_35
        while (eax_35 u< esi_1)
        
        x87_r6_2 = fconvert.t(var_40_2)
        edx_6 = var_c_1
        
        if (edx_8 != 0)
            continue
    
    int32_t eax_44 = 0
    int32_t var_20_7 = 0
    
    if (esi_1 == 0)
        break
    
    char ecx_18
    
    do
        void* eax_36 = edi_3[eax_44]
        void* eax_37 = *(eax_36 + 0x10)
        int32_t ecx_16 = *(eax_37 + 0xb8)
        
        if (Concurrency::details::SchedulerProxy::MinVprocHWThreads(eax_37) + ecx_16
                u<= *(eax_36 + 4))
            ecx_18 = var_5_1
        else
            int32_t eax_40 =
                Concurrency::details::SchedulerProxy::MinVprocHWThreads(*(eax_36 + 0x10))
            long double x87_r7_19 = float.t(eax_40 + ecx_16)
            
            if (eax_40 + ecx_16 s< 0)
                x87_r7_19 = x87_r7_19 + fconvert.t(4294967296.0)
            
            ecx_18 = 1
            long double x87_r7_21 =
                fconvert.t(fconvert.d(x87_r7_19)) / fconvert.t(fconvert.d(x87_r7_5))
            var_5_1 = 1
            var_38_1 = fconvert.d(x87_r7_21 - fconvert.t(*(eax_36 + 0x20)) + fconvert.t(var_38_1))
            *(eax_36 + 0x20) = fconvert.d(x87_r7_21)
        
        eax_44 = var_20_7 + 1
        var_20_7 = eax_44
    while (eax_44 u< esi_1)
    
    x87_r6_2 = fconvert.t(var_40_2)
    edx_6 = var_c_1
    
    if (ecx_18 == 0)
        break

int32_t ecx_20 = arg3

if (*(*edi_3 + 4) u> ecx_20)
    if (esi_1 u> 1)
        do
            void* eax_46 = edi_3[ebx_2]
            void* edx_10 = *(eax_46 + 0x10)
            int32_t ecx_22 = *(edx_10 + 0xa0) - *(eax_46 + 4)
            
            if (ecx_22 != *(edx_10 + 0xa8))
                Concurrency::details::ResourceManager::ReleaseSchedulerResources(arg1, arg2, 
                    edx_10, ecx_22 - *(edx_10 + 0xa8))
            
            ebx_2 += 1
        while (ebx_2 u< esi_1)
        
        ecx_20 = arg3
    
    var_28 = sub_6eed3c(arg1, arg2, *(*edi_3 + 4) - ecx_20, 0)

_free(edi_3)
