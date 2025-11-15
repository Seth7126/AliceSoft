// 函数: sub_523aa0
// 地址: 0x523aa0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_5238f0(arg1)
int32_t eax = *arg1

if (arg2 == 0)
    (*(eax + 0x34))()
else
    (*(eax + 0x30))()

uint32_t arg_8
uint32_t edi = arg_8
struct _EXCEPTION_REGISTRATION_RECORD** eax_1 = *(edi + 4)

if (eax_1 + 1 u<= *(edi + 8))
    bool cond:1_1 = *eax_1 == 1
    *(edi + 4) = eax_1 + 1
    
    if (sub_61ed80(edi, &arg1[0x1f]).b != 0)
        char eax_3 = sub_61ec90(edi, &arg1[0x26])
        
        if (eax_3 == 0)
            return eax_3
        
        void* eax_4
        
        if (sub_61ec90(edi, &arg1[0x27]).b != 0 && sub_61ec90(edi, &arg1[0x28]).b != 0
                && sub_61ec90(edi, &arg1[0x29]).b != 0 && sub_61ec90(edi, &arg1[0x2a]).b != 0)
            arg_8 = 0
            
            if (sub_61ec90(edi, &arg_8).b != 0)
                if (cond:1_1 == 0)
                label_523be7:
                    arg1[0x2b].b = 1
                    eax_4.b = 1
                    return eax_4
                
                if (sub_5235f0(arg1, &arg1[0x1f], arg1[0x26], arg1[0x27], arg1[0x28], arg1[0x29], 
                        arg1[0x2a]).b != 0)
                    eax_4 = arg_8
                    int32_t* ecx_10 = arg1[0x25]
                    
                    if (eax_4 s< 0)
                        if (ecx_10 != 0 && sub_435b30(ecx_10, 0).b != 0)
                            int32_t* ecx_11 = arg1[0x25]
                            
                            if (sub_435f60(ecx_11, ecx_11[0x2f]).b != 0)
                                goto label_523be7
                    else if (ecx_10 != 0 && sub_435b30(ecx_10, eax_4).b != 0)
                        goto label_523be7
        
        eax_4.b = 0
        return eax_4

eax_1.b = 0
return eax_1
