// 函数: sub_6f88f0
// 地址: 0x6f88f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result
int32_t edi_1

while (true)
    if (*arg1 s< arg1[1])
        edi_1 = *arg1
        int32_t ecx_1 = arg1[2] & edi_1
        
        if ((*(arg1[3] + (ecx_1 << 2)) & 1) == 0 || arg2 != 0)
        label_6f8929:
            int32_t* eax_5 = arg1[3] + ((edi_1 & arg1[2]) << 2)
            int32_t result_1 = *eax_5
            *eax_5 = 0
            result = result_1
            
            if ((result.b & 1) == 0)
                break
            
            result &= 0xfffffffe
            
            if (Concurrency::details::Mailbox<class Concurrency::details::_UnrealizedChore>::Slot::Claim(
                    arg1[4] + ((edi_1 & arg1[2]) << 3), nullptr) != 0)
                break
            
            *arg1 = edi_1 + 1
            continue
        else if (sub_6fc5c5(arg1[4] + (ecx_1 << 3)) == 0)
            goto label_6f8929
    
    return 0

if (result != 0)
    *arg1 = edi_1 + 1

return result
