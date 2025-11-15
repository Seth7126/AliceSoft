// 函数: sub_6f8cc7
// 地址: 0x6f8cc7
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = sub_6f09b1()
int32_t* var_40
void var_3c
void arg_4
int32_t* result

if (*(arg1[8] + 0x1b8) s> 0)
    var_40 = &arg_4
    Concurrency::location::_Assign(&var_3c, var_40)
    int32_t* edi_1 = arg1[8]
    var_40 = arg1
    int32_t esi_1 = *(*edi_1 + 0x3c)
    j_sub_4033e0()
    result = esi_1(var_40)
    
    if (result.b != 0)
        return result

if (edi != 0)
    result.b = edi[0x13].b
    
    if (result.b == 0)
        int32_t eax_1 = sub_4866a0(edi)
        
        if (arg1[8] == eax_1 && (*(*(arg1[7] + 0x100) + 0x30) & 2) == 0)
            int32_t ecx_5 = *(edi[0x27] + 0x90)
            
            if ((*(*(arg1[7] + 0x20) + (ecx_5 u>> 5 << 2)) & 1 << (ecx_5.b & 0x1f)) != 0)
                void* eax_8 = edi[0x27]
                
                if (*(eax_8 + 0x14) - *(eax_8 + 0x10) s< zx.d(*(arg1[8] + 0x10)))
                    void* eax_11 = arg1[7]
                    
                    if (Concurrency::details::ContextBase::GetScheduleGroup(edi)
                            != *(eax_11 + 0x100))
                        arg1[0x39] = 1
                    
                    Concurrency::details::StructuredWorkStealingQueue<class Concurrency::details::InternalContextBase,class Concurrency::details::_HyperNonReentrantLock>::Push(
                        edi[0x27] + 0x10, arg1)
                    void* edi_2
                    
                    if (*(arg1[8] + 0x1b4) s<= 0)
                        edi_2 = eax_11
                    else
                        void var_20
                        Concurrency::location::_Assign(&var_20, &arg_4)
                        void* esi_5 = arg1[8]
                        int32_t var_30_3 = 0xb
                        Concurrency::location::_Assign(&var_40, &var_20)
                        edi_2 = eax_11
                        Concurrency::details::SchedulerBase::StartupVirtualProcessor(esi_5, edi_2, 
                            var_40)
                    
                    if (Concurrency::details::ContextBase::GetScheduleGroup(edi)
                            != *(edi_2 + 0x100))
                        arg1[0x39] = 0
                    
                    return sub_40d500()

var_40 = &arg_4
Concurrency::location::_Assign(&var_3c, var_40)
int32_t* ecx_19 = arg1[7]
var_40 = arg1
return sub_6face2(ecx_19, var_40)
