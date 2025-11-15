// 函数: ?StealUnrealizedChore@ScheduleGroupSegmentBase@details@Concurrency@@IAEPAV_UnrealizedChore@23@_N@Z
// 地址: 0x6fb879
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
int32_t eax_1
eax_1.b = arg2
char var_5c = eax_1.b
int32_t i = 0
char var_49 = 0
int32_t ecx = *(arg1 + 0x98)
void* const result_1
void* const result

if (ecx s> 0)
    int32_t eax_2 = 0
    int32_t var_54_1 = 0
    char var_4a = 0
    int32_t var_50_1 = 0
    
    while (true)
        int32_t* eax_3 = sub_6efd4d(arg1 + 0x58, eax_2)
        int32_t var_48[0x10]
        int32_t eax_6
        int32_t ecx_4
        
        if (eax_3 == 0)
            eax_6 = var_54_1
            ecx_4 = var_50_1
        else
            bool eax_4
            
            if (Concurrency::details::WorkQueue::IsEmpty(eax_3) != 0)
                eax_4 = eax_3[0xe] == 1
            label_6fb938:
                var_49 |= eax_4
                eax_6 = var_54_1
                ecx_4 = var_50_1
            else
                result = Concurrency::details::WorkQueue::TryToSteal(eax_3, var_5c, &var_4a)
                result_1 = result
                
                if (result != 0)
                    goto label_6fba1f
                
                if (var_4a != 0)
                label_6fb91b:
                    char eax_7
                    
                    if (eax_3[0xe] == 1)
                        eax_7 = Concurrency::details::WorkQueue::IsEmpty(eax_3)
                    
                    if (eax_3[0xe] != 1 || eax_7 == 0)
                        eax_4 = false
                        goto label_6fb938
                    
                    eax_4 = true
                    goto label_6fb938
                
                if (var_54_1 s>= 0xf)
                    result = Concurrency::details::WorkQueue::Steal(eax_3, var_5c)
                    result_1 = result
                    
                    if (result != 0)
                        goto label_6fba1f
                    
                    goto label_6fb91b
                
                ecx_4 = var_50_1
                var_48[var_54_1] = ecx_4
                eax_6 = var_54_1 + 1
                var_54_1 = eax_6
        
        var_50_1 = ecx_4 + 1
        
        if (ecx_4 + 1 s>= ecx)
            if (eax_6 s> 0)
                int32_t ecx_8 = 0
                int32_t var_50_2 = 0
                
                do
                    int32_t* eax_8 = sub_6efd4d(arg1 + 0x58, var_48[ecx_8])
                    
                    if (eax_8 != 0)
                        if (Concurrency::details::WorkQueue::IsEmpty(eax_8) == 0)
                            result = Concurrency::details::WorkQueue::Steal(eax_8, var_5c)
                            result_1 = result
                            
                            if (result != 0)
                                goto label_6fba1f
                        
                        char eax_10
                        
                        if (eax_8[0xe] == 1)
                            eax_10 = Concurrency::details::WorkQueue::IsEmpty(eax_8)
                        
                        char eax_11
                        
                        if (eax_8[0xe] != 1 || eax_10 == 0)
                            eax_11 = 0
                        else
                            eax_11 = 1
                        
                        var_49 |= eax_11
                    
                    ecx_8 = var_50_2 + 1
                    var_50_2 = ecx_8
                while (ecx_8 s< var_54_1)
            
            break
        
        eax_2 = ecx_4 + 1

if (Concurrency::details::Mailbox<class Concurrency::details::_UnrealizedChore>::Dequeue(
        arg1 + 0x34, &result_1) == 0)
    if (*(arg1 + 0xe8) s> 0 && var_49 != 0 && *(arg1 + 0x98) s> 0)
        do
            void* eax_14 = sub_6efd4d(arg1 + 0x58, i)
            
            if (eax_14 != 0 && *(eax_14 + 0x38) == 1 && *(eax_14 + 0x50) s<= *(eax_14 + 0x4c))
                Concurrency::details::ScheduleGroupSegmentBase::SafelyDeleteDetachedWorkQueue(arg1, 
                    eax_14)
            
            i += 1
        while (i s< *(arg1 + 0x98))
    
    result = nullptr
else
    Concurrency::details::_UnrealizedChore::_SetDetached(result_1, 1)
    result = result_1

label_6fba1f:
@__security_check_cookie@4(var_8 ^ &__saved_ebp)
return result
