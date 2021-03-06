#pragma once
#include <vector>

// CLiquify 对话框

class CLiquify : public CDialogEx
{
	DECLARE_DYNAMIC(CLiquify)

public:
	CLiquify(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CLiquify();

// 对话框数据
	enum { IDD = IDD_LIQUIFY };
	ATL::CImage CI;
	ATL::CImage CI_ori;
	bool mouse_down;
	CPoint last_point;
	std::vector<CPoint> last_points;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	afx_msg void OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	afx_msg void OnBnClickedOkay();
	afx_msg void OnBnClickedCancel();
	afx_msg void OnPaint();
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

void iiw(int radius, int strength, CPoint last, CPoint current, double point_x, double point_y,
	double *src_x, double *src_y);