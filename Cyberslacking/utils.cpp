//将秒数转化为时分秒格式
QString sec2data(int totalSec)
{
	int H = totalSec / (60 * 60);
	int M = (totalSec - (H * 60 * 60)) / 60;
	int S = (totalSec - (H * 60 * 60)) - M * 60;

	QString hour = QString::number(H);
	if (hour.length() == 1)
		hour = "0" + hour;
	QString min = QString::number(M);
	if (min.length() == 1)
		min = "0" + min;
	QString sec = QString::number(S);
	if (sec.length() == 1)
		sec = "0" + sec;

	return hour + ":" + min + ":" + sec;
}
