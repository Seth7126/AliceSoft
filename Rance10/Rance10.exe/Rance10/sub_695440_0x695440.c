// 函数: sub_695440
// 地址: 0x695440
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

(*(*arg1 + 0xc))()
struct _EXCEPTION_REGISTRATION_RECORD** eax_1

if (arg2 != 0 && arg3 != 0)
    arg1[7] = arg2
    (**arg2)()
    arg1[0x11] = arg3
    (**arg3)()
    int32_t eax_5 = (*(*arg1[0x11] + 0xc))()
    
    if (eax_5 != 1)
        eax_1 = (*(*arg1[0x11] + 0xc))()
    
    if (eax_5 == 1 || eax_1 == 2)
        int32_t eax_8 = (*(*arg1[0x11] + 0x1c))()
        
        if (eax_8 != 8)
            eax_1 = (*(*arg1[0x11] + 0x1c))()
        
        if (eax_8 == 8 || eax_1 == 0x10)
            if ((*(*arg1[0x11] + 0x10))() == 0x5622)
            label_6954c7:
                int32_t* ecx_8 = arg1[7]
                
                if (ecx_8 != 0 && arg1[0x11] != 0)
                    int32_t eax_13 = (*(*ecx_8 + 0x28))()
                    arg1[0x16] = sub_484f40(arg1[0x11], eax_13)
                    
                    if (sub_6966d0(arg1).b != 0)
                        (*(*arg1 + 0x34))(0, 
                            divu.dp.d(0:((*(*arg1[7] + 0x28))()), sub_695a30(arg1)))
                        int32_t eax_20
                        eax_20.b = 1
                        return eax_20
            else if ((*(*arg1[0x11] + 0x10))() == 0xac44)
                goto label_6954c7

eax_1.b = 0
return eax_1
