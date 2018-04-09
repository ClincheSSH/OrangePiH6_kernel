/*
 ******************************************************************************
 *
 * parser_reg_i.h
 *
 * CSIC - parser_reg_i.h module
 *
 * Copyright (c) 2016 by Allwinnertech Co., Ltd.  http://www.allwinnertech.com
 *
 * Version		  Author         Date		    	Description
 *
 *   1.0		  Zhao Wei   	2016/06/13	      First Version
 *
 ******************************************************************************
 */
#ifndef __CSIC__PARSER__REG__I__H__
#define __CSIC__PARSER__REG__I__H__

/*
 * Detail information of registers
 */
#define PRS_EN_REG_OFF				0X000
#define PRS_EN_REG_PRS_EN			0
#define PRS_EN_REG_PRS_EN_MASK			(0X1 << PRS_EN_REG_PRS_EN)
#define PRS_EN_REG_PRS_MODE			1
#define PRS_EN_REG_PRS_MODE_MASK		(0X1 << PRS_EN_REG_PRS_MODE)
#define PRS_EN_REG_PCLK_EN			15
#define PRS_EN_REG_PCLK_EN_MASK			(0X1 << PRS_EN_REG_PCLK_EN)
#define PRS_EN_REG_NCSIC_EN			16
#define PRS_EN_REG_NCSIC_EN_MASK		(0X1 << PRS_EN_REG_NCSIC_EN)
#define PRS_EN_REG_MCSIC_EN			31
#define PRS_EN_REG_MCSIC_EN_MASK		(0X1 << PRS_EN_REG_MCSIC_EN)


#define PRS_NCSIC_IF_CFG_REG_OFF		0X004
#define PRS_NCSIC_IF_CSI_IF			0
#define PRS_NCSIC_IF_CSI_IF_MASK		(0X1F << PRS_NCSIC_IF_CSI_IF)
#define PRS_NCSIC_IF_OUTPUT_MODE		5
#define PRS_NCSIC_IF_OUTPUT_MODE_MASK		(0X1 << PRS_NCSIC_IF_OUTPUT_MODE)
#define PRS_NCSIC_IF_INPUT_SEQ			6
#define PRS_NCSIC_IF_INPUT_SEQ_MASK		(0X3 << PRS_NCSIC_IF_INPUT_SEQ)
#define PRS_NCSIC_IF_DATA_WIDTH			8
#define PRS_NCSIC_IF_DATA_WIDTH_MASK		(0X7 << PRS_NCSIC_IF_DATA_WIDTH)
#define PRS_NCSIC_IF_SEQ_8PLUS2			11
#define PRS_NCSIC_IF_SEQ_8PLUS2_MASK		(0X3 << PRS_NCSIC_IF_SEQ_8PLUS2)
#define PRS_NCSIC_IF_DDR_SAMPLE_MODE		13
#define PRS_NCSIC_IF_DDR_SAMPLE_MODE_MASK	(0X1 << PRS_NCSIC_IF_DDR_SAMPLE_MODE)
#define PRS_NCSIC_IF_FIELD_DT			14
#define PRS_NCSIC_IF_FIELD_DT_MASK		(0X3 << PRS_NCSIC_IF_FIELD_DT)
#define PRS_NCSIC_IF_CLK_POL			16
#define PRS_NCSIC_IF_CLK_POL_MASK		(0X1 << PRS_NCSIC_IF_CLK_POL)
#define PRS_NCSIC_IF_HREF_POL			17
#define PRS_NCSIC_IF_HREF_POL_MASK		(0X1 << PRS_NCSIC_IF_HREF_POL)
#define PRS_NCSIC_IF_VREF_POL			18
#define PRS_NCSIC_IF_VREF_POL_MASK		(0X1 << PRS_NCSIC_IF_VREF_POL)
#define PRS_NCSIC_IF_FIELD_POL			19
#define PRS_NCSIC_IF_FIELD_POL_MASK		(0X1 << PRS_NCSIC_IF_FIELD_POL)
#define PRS_NCSIC_IF_RES0			20
#define PRS_NCSIC_IF_SRC_TYPE			21
#define PRS_NCSIC_IF_SRC_TYPE_MASK		(0X1 << PRS_NCSIC_IF_SRC_TYPE)
#define PRS_NCSIC_IF_PCLK_SHIFT			24
#define PRS_NCSIC_IF_PCLK_SHIFT_MASK		(0XF << PRS_NCSIC_IF_PCLK_SHIFT)

#define PRS_MCSIC_IF_CFG_REG_OFF		0X008
#define PRS_MCSIC_IF_OUTPUT_MODE		5
#define PRS_MCSIC_IF_OUTPUT_MODE_MASK		(0X1 << PRS_MCSIC_IF_OUTPUT_MODE)
#define PRS_MCSIC_IF_INPUT_SEQ			6
#define PRS_MCSIC_IF_INPUT_SEQ_MASK		(0X3 << PRS_MCSIC_IF_INPUT_SEQ)

#define PRS_CAP_REG_OFF				0X00C
#define CH0_SCAP_ON				0
#define CH0_SCAP_ON_MASK			(0X1 << CH0_SCAP_ON)
#define CH0_VCAP_ON				1
#define CH0_VCAP_ON_MASK			(0X1 << CH0_VCAP_ON)
#define CH0_CAP_MASK           			2
#define CH0_CAP_MASK_MASK			(0XF << CH0_CAP_MASK)
#define CH1_SCAP_ON				8
#define CH1_SCAP_ON_MASK			(0X1 << CH1_SCAP_ON)
#define CH1_VCAP_ON				9
#define CH1_VCAP_ON_MASK			(0X1 << CH1_VCAP_ON)
#define CH1_CAP_MASK           			10
#define CH1_CAP_MASK_MASK			(0XF << CH1_CAP_MASK)
#define CH2_SCAP_ON				16
#define CH2_SCAP_ON_MASK			(0X1 << CH2_SCAP_ON)
#define CH2_VCAP_ON				17
#define CH2_VCAP_ON_MASK			(0X1 << CH2_VCAP_ON)
#define CH2_CAP_MASK           			18
#define CH2_CAP_MASK_MASK			(0XF << CH2_CAP_MASK)
#define CH3_SCAP_ON				24
#define CH3_SCAP_ON_MASK			(0X1 << CH3_SCAP_ON)
#define CH3_VCAP_ON				25
#define CH3_VCAP_ON_MASK			(0X1 << CH3_VCAP_ON)
#define CH3_CAP_MASK           			26
#define CH3_CAP_MASK_MASK			(0XF << CH3_CAP_MASK)

#define PRS_SIGNAL_STA_REG_OFF			0X010
#define DATA_STA				0
#define DATA_STA_MASK				(0XFFFFFF << DATA_STA)
#define PCLK_STA				24
#define PCLK_STA_MASK				(0XF << PCLK_STA)

#define PRS_NCSIC_BT656_HEAD_CFG_REG_OFF	0X014
#define CH0_ID					0
#define CH0_ID_MASK				(0XF << CH0_ID)
#define CH1_ID					8
#define CH1_ID_MASK				(0XF << CH1_ID)
#define CH2_ID					16
#define CH2_ID_MASK				(0XF << CH2_ID)
#define CH3_ID					24
#define CH3_ID_MASK				(0XF << CH3_ID)

/***channel 0***/
#define PARSER_CH_OFF				0x100

#define PRS_CH0_INFMT_REG_OFF			0X024
#define PRS_CH0_INPUT_FMT			0
#define PRS_CH0_INPUT_FMT_MASK			(0XF << PRS_CH0_INPUT_FMT)

#define PRS_CH0_OUTPUT_HSIZE_REG_OFF		0X028
#define PRS_CH0_HOR_START			0
#define PRS_CH0_HOR_START_MASK			(0X1FFF << PRS_CH0_HOR_START)
#define PRS_CH0_HOR_LEN				16
#define PRS_CH0_HOR_LEN_MASK			(0X1FFF << PRS_CH0_HOR_LEN)

#define PRS_CH0_OUTPUT_VSIZE_REG_OFF		0X02C
#define PRS_CH0_VER_START			0
#define PRS_CH0_VER_START_MASK			(0X1FFF << PRS_CH0_VER_START)
#define PRS_CH0_VER_LEN				16
#define PRS_CH0_VER_LEN_MASK			(0X1FFF << PRS_CH0_VER_LEN)

#define PRS_CH0_INPUT_PARA0_REG_OFF		0X030
#define PRS_CH0_INPUT_SRC_TYPE			0
#define PRS_CH0_INPUT_SRC_TYPE_MASK		(0X1 << PRS_CH0_INPUT_SRC_TYPE)

#define PRS_CH0_INPUT_PARA1_REG_OFF		0X034
#define PRS_CH0_INPUT_HT			0
#define PRS_CH0_INPUT_HT_MASK			(0X3FFF << PRS_CH0_INPUT_HT)
#define PRS_CH0_INPUT_VT			16
#define PRS_CH0_INPUT_VT_MASK			(0X3FFF << PRS_CH0_INPUT_VT)

#define PRS_CH0_INPUT_PARA2_REG_OFF		0X038
#define PRS_CH0_INPUT_HB			0
#define PRS_CH0_INPUT_HB_MASK			(0X3FFF << PRS_CH0_INPUT_HB)
#define PRS_CH0_INPUT_VB			16
#define PRS_CH0_INPUT_VB_MASK			(0X3FFF << PRS_CH0_INPUT_VB)

#define PRS_CH0_INPUT_PARA3_REG_OFF		0X03C
#define PRS_CH0_INPUT_X				0
#define PRS_CH0_INPUT_X_MASK			(0X3FFF << PRS_CH0_INPUT_X)
#define PRS_CH0_INPUT_Y				16
#define PRS_CH0_INPUT_Y_MASK			(0X3FFF << PRS_CH0_INPUT_Y)

#define PRS_CH0_INT_EN_REG_OFF			0X040
#define PRS_CH0_INPUT_PARA0_INT_EN		0
#define PRS_CH0_INPUT_PARA0_INT_EN_MASK		(0X1 << PRS_CH0_INPUT_PARA0_INT_EN)

#define PRS_CH0_INPUT_PARA1_INT_EN		1
#define PRS_CH0_INPUT_PARA1_INT_EN_MASK		(0X1 << PRS_CH0_INPUT_PARA1_INT_EN)

#define PRS_CH0_MUL_ERR_INT_EN			2
#define PRS_CH0_MUL_ERR_INT_EN_MASK		(0X1 << PRS_CH0_MUL_ERR_INT_EN)

#define PRS_CH0_INT_STA_REG_OFF			0X044
#define PRS_CH0_INPUT_SRC_PD0			0
#define PRS_CH0_INPUT_SRC_PD0_MASK		(0X1 << PRS_CH0_INPUT_SRC_PD0)

#define PRS_CH0_INPUT_SRC_PD1			1
#define PRS_CH0_INPUT_SRC_PD1_MASK		(0X1 << PRS_CH0_INPUT_SRC_PD1)

#define PRS_CH0_MUL_ERR_PD			2
#define PRS_CH0_MUL_ERR_PD_MASK			(0X1 << PRS_CH0_MUL_ERR_PD)

#define PRS_NCSIC_RX_SIGNAL0_DLY_ADJ_REG_OFF	0X500
#define PRS_PCLK_DLY				0
#define PRS_PCLK_DLY_MASK			(0X1F << PRS_PCLK_DLY)
#define PRS_HSYNC_DLY				8
#define PRS_HSYNC_DLY_MASK			(0X1F << PRS_HSYNC_DLY)
#define PRS_VSYNC_DLY				16
#define PRS_VSYNC_DLY_MASK			(0X1F << PRS_VSYNC_DLY)

#define PRS_NCSIC_RX_SIGNAL1_DLY_ADJ_REG_OFF	0X504
#define PRS_D20_DLY				0
#define PRS_D20_DLY_MASK			(0X1F << PRS_D20_DLY)
#define PRS_D21_DLY				8
#define PRS_D21_DLY_MASK			(0X1F << PRS_D21_DLY)
#define PRS_D22_DLY				16
#define PRS_D22_DLY_MASK			(0X1F << PRS_D22_DLY)
#define PRS_D23_DLY				24
#define PRS_D23_DLY_MASK			(0X1F << PRS_D23_DLY)

#define PRS_NCSIC_RX_SIGNAL2_DLY_ADJ_REG_OFF	0X508
#define PRS_D16_DLY				0
#define PRS_D16_DLY_MASK			(0X1F << PRS_D16_DLY)
#define PRS_D17_DLY				8
#define PRS_D17_DLY_MASK			(0X1F << PRS_D17_DLY)
#define PRS_D18_DLY				16
#define PRS_D18_DLY_MASK			(0X1F << PRS_D18_DLY)
#define PRS_D19_DLY				24
#define PRS_D19_DLY_MASK			(0X1F << PRS_D19_DLY)

#define PRS_NCSIC_RX_SIGNAL3_DLY_ADJ_REG_OFF	0X50C
#define PRS_D12_DLY				0
#define PRS_D12_DLY_MASK			(0X1F << PRS_D12_DLY)
#define PRS_D13_DLY				8
#define PRS_D13_DLY_MASK			(0X1F << PRS_D13_DLY)
#define PRS_D14_DLY				16
#define PRS_D14_DLY_MASK			(0X1F << PRS_D14_DLY)
#define PRS_D15_DLY				24
#define PRS_D15_DLY_MASK			(0X1F << PRS_D15_DLY)

#define PRS_NCSIC_RX_SIGNAL4_DLY_ADJ_REG_OFF	0X510
#define PRS_D8_DLY				0
#define PRS_D8_DLY_MASK				(0X1F << PRS_D8_DLY)
#define PRS_D9_DLY				8
#define PRS_D9_DLY_MASK				(0X1F << PRS_D9_DLY)
#define PRS_D10_DLY				16
#define PRS_D10_DLY_MASK			(0X1F << PRS_D10_DLY)
#define PRS_D11_DLY				24
#define PRS_D11_DLY_MASK			(0X1F << PRS_D11_DLY)

#define PRS_NCSIC_RX_SIGNAL5_DLY_ADJ_REG_OFF	0X514
#define PRS_D4_DLY				0
#define PRS_D4_DLY_MASK				(0X1F << PRS_D4_DLY)
#define PRS_D5_DLY				8
#define PRS_D5_DLY_MASK				(0X1F << PRS_D5_DLY)
#define PRS_D6_DLY				16
#define PRS_D6_DLY_MASK				(0X1F << PRS_D6_DLY)
#define PRS_D7_DLY				24
#define PRS_D7_DLY_MASK				(0X1F << PRS_D7_DLY)

#define PRS_NCSIC_RX_SIGNAL6_DLY_ADJ_REG_OFF	0X518
#define PRS_D0_DLY				0
#define PRS_D0_DLY_MASK				(0X1F << PRS_D0_DLY)
#define PRS_D1_DLY				8
#define PRS_D1_DLY_MASK				(0X1F << PRS_D1_DLY)
#define PRS_D2_DLY				16
#define PRS_D2_DLY_MASK				(0X1F << PRS_D2_DLY)
#define PRS_D3_DLY				24
#define PRS_D3_DLY_MASK				(0X1F << PRS_D3_DLY)

#endif /* __CSIC__PARSER__REG__I__H__ */
