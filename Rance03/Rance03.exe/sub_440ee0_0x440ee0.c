// 函数: sub_440ee0
// 地址: 0x440ee0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4_1 = arg1
int32_t* ebx = arg2
int32_t* esi = arg1
int32_t* var_4 = esi
int32_t eax_1 = (**ebx)()
int32_t eax_3

if (eax_1 == 0xd)
    eax_3 = (*(*ebx + 0xc))()

int32_t* eax_5

if (eax_1 == 0xd && eax_3 == 1)
label_440f20:
    int32_t eax_9 = (esi[1] - *esi) s>> 4
    arg2 = eax_9
    void* eax_10 = *ebx
    
    if (eax_9 s<= 0)
        (*(eax_10 + 0x38))()
        int32_t eax_11
        eax_11.b = 1
        return eax_11
    
    if ((*(eax_10 + 0x30))(&arg2, 1).b != 0)
        int32_t edi = 0
        
        if (arg2 s> 0)
            do
                *esi
                int32_t ebp_2
                eax_5, ebp_2 = sub_43f790((*(*ebx + 0x1c))(edi))
                
                if (eax_5.b == 0)
                    eax_5.b = 0
                    return eax_5
                
                esi = var_4
                edi += 1
            while (edi s< arg2)
        
        eax_5.b = 1
        return eax_5
else if ((**ebx)() == 0x11 && (*(*ebx + 0xc))() == 0xffffffff)
    goto label_440f20

eax_5.b = 0
return eax_5
