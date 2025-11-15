// 函数: sub_4f4360
// 地址: 0x4f4360
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
void* eax_2 = (*(arg1 + 0x60) - *(arg1 + 0x5c)) & 0xfffffffc

if (eax_2 s< 0x9c40)
    void* var_14_1 = arg3
    struct partsengine::CGUIController::VTable** edi_1 = sub_4f41d0(arg1, arg2)
    arg3 = edi_1
    sub_4f3210(edi_1)
    
    if (*(arg1 + 0x84) s>= 1)
        void* ecx_1 = edi_1[1]
        
        if (ecx_1 != 0)
            edi_1 = sub_4f01b0(ecx_1)
        
        void* ecx_2 = edi_1[3]
        
        if (ecx_2 != 0)
            edi_1 = sub_4f01b0(ecx_2)
        
        sub_4fb6b0(&edi_1[4])
    
    int32_t ecx_5 = arg4
    
    if (ecx_5 s< 0)
        ecx_5 = sub_4f4320(arg1) + 1
    
    if ((*(arg1 + 0x60) - *(arg1 + 0x5c)) s>> 2 s<= ecx_5)
        sub_42ccf0(arg1 + 0x5c, &arg3)
        void* eax_5 = arg3
        *(arg1 + 0x68) = eax_5
        return eax_5
    
    void** var_14_3 = &arg3
    sub_404420(arg1 + 0x5c, &arg2, *(arg1 + 0x5c) + (ecx_5 << 2), &arg3)
    eax_2 = arg3
    *(arg1 + 0x68) = eax_2

return eax_2
