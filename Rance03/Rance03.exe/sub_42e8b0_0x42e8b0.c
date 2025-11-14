// 函数: sub_42e8b0
// 地址: 0x42e8b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*arg4 == arg4[1])
    int32_t eax
    eax.b = 1
    return eax

int32_t* eax_2 = (*(**(arg1 + 8) + 4))(arg2)

if (eax_2 == 0)
    eax_2.b = 0
    return eax_2

struct _EXCEPTION_REGISTRATION_RECORD** eax_4

if ((*(*eax_2 + 0x14))() != (arg4[1] - *arg4) s>> 2 << 2)
label_42e96a:
    eax_4.b = 0
    return eax_4

int32_t eax_6 = (*(*eax_2 + 0x18))()
int32_t esi_3 = 0
int32_t edx_1 = *arg4

if (((arg4[1] - edx_1) & 0xfffffffc) s> 0)
    int32_t* ecx_6 = arg3
    
    while (true)
        eax_4 = *(edx_1 + (esi_3 << 2))
        
        if (eax_4 u> 0x44)
            goto label_42e96a
        
        switch (eax_4)
            case nullptr, 0xa, 0xb, 0x1a, 0x1b, 0x2f
            label_42e952:
                esi_3 += 1
                edx_1 = *arg4
                
                if (esi_3 s>= (arg4[1] - edx_1) s>> 2)
                    break
                
                continue
            case 1, 2, 3, 4, 5, 6, 7, 8, 9, 0x1c, 0x1d, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 
                    0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x30, 0x31, 0x35, 0x36, 0x37, 0x38, 
                    0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x40, 0x41
                goto label_42e96a
            case 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 
                    0x1e, 0x1f, 0x20, 0x32, 0x33, 0x34, 0x3f, 0x42, 0x43, 0x44
                if (*(eax_6 + (esi_3 << 2)) != 0xffffffff)
                    if (sub_42e5b0(arg1, *(eax_6 + (esi_3 << 2)), ecx_6).b == 0)
                        goto label_42e96a
                    
                    ecx_6 = arg3
                
                goto label_42e952

eax_6.b = 1
return eax_6
